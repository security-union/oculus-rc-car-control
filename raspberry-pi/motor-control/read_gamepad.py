import asyncio
from gamepad import Gamepad
import lgpio
import time

MOTOR = 18
FREQ_HZ = 20

SERVO = 23
SERVO_HZ = 250

async def poll_gamepad(gamepad):
    while True:
        print("reading")
        await gamepad.read_gamepad_input()

async def print_stick(gamepad):
    motor = lgpio.gpiochip_open(0)
    while True:
        percent = abs(round(gamepad.joystick_left_y*75))
        duty_cycle = round(11 + (round((gamepad.joystick_right_x + 1) * 50) * 18 / 100))
        print(f"stick left {percent}")
        print(f"stick right {duty_cycle}")
        lgpio.tx_pwm(motor, MOTOR, FREQ_HZ, percent)
        lgpio.tx_pwm(motor, SERVO, SERVO_HZ, duty_cycle)
        await asyncio.sleep(0.01)

if __name__ == "__main__":
    print('starting')
    gamepad = Gamepad(file='/dev/input/event0')
    loop = asyncio.get_event_loop()
    loop.create_task(poll_gamepad(gamepad))
    loop.create_task(print_stick(gamepad))
    loop.run_forever()
