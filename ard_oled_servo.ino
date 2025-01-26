#include <U8g2lib.h>
#include <Servo.h>

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

const int potPin = A3;
const int servo = 10;
int value;
int progress;
int angle;

Servo myservo;
void setup() {
  pinMode(potPin, INPUT);
  myservo.attach(10);
  u8g2.begin();
  u8g2.setFont(u8g2_font_t0_11_tf);
}

void loop() {
  value = analogRead(potPin);
  progress = map(value, 0, 1023, 0, 108);
  angle = map(value, 0, 1023, 0, 180);
  u8g2.clearBuffer();
  u8g2.drawStr(25, 50, "potPin value: ");
  u8g2.drawFrame(0, 10, 128, 20);
  u8g2.drawBox(10, 15, progress, 10);
  u8g2.sendBuffer();
  myservo.write(angle);

  delay(50);
}
