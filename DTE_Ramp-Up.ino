
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C lcd(0x27,20,4);

void setup() {
lcd.init();
lcd.backlight();
lcd.setCursor (0,0);
lcd.print("Hello World");
lcd.setCursor (0,1);
lcd.print("   Nathaniel Test");
delay(2000);

}
void loop() 
{
lcd.clear();
for (int ii=0; ii < 10; ii = ii+1) {
lcd.print(ii);
delay(2000);
lcd.clear();
}
}
