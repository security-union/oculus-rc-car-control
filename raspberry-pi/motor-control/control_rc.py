import asyncio
import lgpio
import time
import sys
from multiprocessing import Pipe
        

IN1 = 18
IN2 = 27
FREQ_HZ = 20

SERVO = 23
SERVO_HZ = 250

async def connect_stdin():
    loop = asyncio.get_event_loop()
    reader = asyncio.StreamReader()
    protocol = asyncio.StreamReaderProtocol(reader)
    await loop.connect_read_pipe(lambda: protocol, sys.stdin)
    return reader

async def poll_gamepad(queue):
    reader = await connect_stdin()
    while True:
        res = await reader.readuntil()
        res_as_str = res.decode("utf-8") 
        line = res_as_str.split(' ')
        length = len(line)
        if length == 6 and line[0] == 'servo':
            # servo 42 in1 34 in2 23
            await queue.put((float(line[1]), float(line[3]), float(line[5])))
        else:
            print(f"not it {res}")

async def print_stick(queue):
    motor = lgpio.gpiochip_open(0)
    while True:
        (servo, in1, in2) = await queue.get()
        lgpio.tx_servo(motor, SERVO, round(servo), SERVO_HZ)
        lgpio.tx_pwm(motor, IN1, FREQ_HZ, 100 if in1 > 0 else 0)
        lgpio.tx_pwm(motor, IN2, FREQ_HZ, 100 if in2 > 0 else 0)
        await asyncio.sleep(0.01)

if __name__ == "__main__":
    print('starting')
    loop = asyncio.get_event_loop()
    queue = asyncio.Queue(100)
    loop.create_task(poll_gamepad(queue))
    loop.create_task(print_stick(queue))
    loop.run_forever()
