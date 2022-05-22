# Test program to ensure comms with servo connected to pin 23

import lgpio
import pigpio
import time

# Configuration
FAN = 23 # pin used to drive PWM fan
FREQ = 250

h = lgpio.gpiochip_open(0)

try:
    while True:
        # Turn the fan off
        #print("turn off")
        for i in range(500,800, 2):
            print(f"angle {i} freq {FREQ}")
            lgpio.tx_servo(h, FAN, i, FREQ)
            time.sleep(0.1)

except KeyboardInterrupt:
    # Turn the fan to medium speed
    lgpio.tx_pwm(h, FAN, FREQ, 50)
    lgpio.gpiochip_close(h)
