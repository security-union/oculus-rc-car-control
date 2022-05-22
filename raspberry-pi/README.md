# Summary

The Raspberry PI needs to run 4 apps:

1. Front camera streaming server

2. Rear camera streaming server

3. Control server and python pwm control

## Compiling the code

*Warning! this program assumes that you are using ubuntu.*

1. Run `setup-cross-compile-raspy.sh` on your dev machine.

2. To deploy to the rpi, use `build-raspy.sh` override the PI_IP variable to match the PI IP in your local network.



