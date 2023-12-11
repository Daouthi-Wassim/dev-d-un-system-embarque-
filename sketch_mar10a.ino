
// Learn about the ESP32 WiFi simulation in
// https://docs.wokwi.com/guides/esp32-wifi
#include <stdio.h>

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C LCD = LiquidCrystal_I2C(0x27, 20, 4);

#define NTP_SERVER     "pool.ntp.org"
#define UTC_OFFSET     0
#define UTC_OFFSET_DST 0


void setup() {
  Serial.begin(115200);

  LCD.init();
  LCD.backlight();
  LCD.setCursor(0, 0);
  LCD.print("     ALERT!!! ");
  LCD.setCursor(0, 1);
  LCD.print("   UN PROBLEME  ");
  LCD.setCursor(0, 2);
  LCD.print("   TECHNIQUE ");
}

void loop() {
 
  
}
