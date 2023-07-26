#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

#define sensor A0
int Reading;

void setup() {
  // put your setup code here, to run once:
 pinMode(sensor, INPUT);
 lcd.init();
 lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
Reading = analogRead(sensor);
lcd.setCursor(0, 0);
lcd.print("Reading = ");
lcd.print(Reading);
lcd.print("                ");
}