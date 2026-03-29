#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,5,6,7);

const int greenLed = 13;
const int yellowLed = 12;
const int redLed = 11;
void setup() {
  pinMode(greenLed,OUTPUT);
  pinMode(yellowLed,OUTPUT);
  pinMode(redLed,OUTPUT);
  digitalWrite(greenLed,LOW);
  digitalWrite(yellowLed,LOW);
  digitalWrite(redLed,LOW);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Initializing..");
  delay(2000);
  lcd.clear();
}

void loop() {
  digitalWrite(greenLed,HIGH);
  digitalWrite(yellowLed,LOW);
  digitalWrite(redLed,LOW);
  lcd.setCursor(0,0);
  lcd.print("WALK NOW");
  for(int i=30;i>=0;i--){
      lcd.setCursor(0,1);
      lcd.print("TIME LEFT: ");
      lcd.print(i);
      lcd.print("s ");
      delay(1000);
  }
  lcd.clear();
  digitalWrite(greenLed,LOW);
  digitalWrite(yellowLed,HIGH);
  digitalWrite(redLed,LOW);
  lcd.setCursor(0,0);
  lcd.print("HURRY UP");
  for(int i=5;i>=0;i--){
      lcd.setCursor(0,1);
      lcd.print("TIME LEFT: ");
      lcd.print(i);
      lcd.print("s ");
      delay(1000);
  }
  lcd.clear();
  digitalWrite(greenLed,LOW);
  digitalWrite(yellowLed,LOW);
  digitalWrite(redLed,HIGH);
  lcd.setCursor(0,0);
  lcd.print("STOP WALKING");
  for(int i=60;i>=0;i--){
      lcd.setCursor(0,1);
      lcd.print("TIME LEFT: ");
      lcd.print(i);
      lcd.print("s ");
      delay(1000);
  }
  lcd.clear();
}
