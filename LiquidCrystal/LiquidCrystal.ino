#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
int Ir=8;
int count_value=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(Ir.INPUT);
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val=digitalRead(Ir);

  if{val==0}
  {
    count_value++;

     
  }
}
