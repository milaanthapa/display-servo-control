# display-servo-control

This project consists an OLED screen, a potentiometer, and a servo motor to produce a visual and operational feedback system. The potentiometer moves a loading bar on the OLED screen and also controls the angle of a servo motor at the same time. It's an simple method to illustrate analog-to-digital conversion, PWM control, and I2C communication in Arduino. Heres  a short gif of the working.

# wokwi-file
https://wokwi.com/projects/421059104245563393

![oledpotard-ezgif com](https://github.com/user-attachments/assets/09ee424a-e20a-4fcd-bc8f-37db560ff23c)
![image](https://github.com/user-attachments/assets/d66b6310-4e71-4455-93a3-9a586f1abb83)


# Parts Used
* Arduino Uno/Nano/Other
* OLED Display (128x64, SSD1306-based)
* Potentiometer
* Servo Motor
* Connecting wires
* Breadboard
* Power supply

# How It Works
The potentiometer provides an analog value, and that is converted to control:
The width of a loading bar on the OLED display.
The angle of the servo motor.
The OLED screen gives a graphical indication of the potentiometer position, and the servo motor travels in real time.

The OLED loading bar provides immediate feedback for the potentiometer.
The servo movement makes it interactive and more practical.
Excellent for new users to experiment with simple electronics and Arduino programming.
