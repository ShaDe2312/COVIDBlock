#include <LiquidCrystal.h> 
int Contrast=100;
int maskCheck=0;

 LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  

 void setup()
 {
     analogWrite(6,Contrast);
     lcd.begin(16, 2);
     
     if(maskCheck==1)
     {
     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Thank you for");

     lcd.setCursor(0,1);
     lcd.print("wearing a mask");
     delay(2000);
     lcd.clear();

     lcd.setCursor(0,0);
     lcd.print("Please Sanitise!");
     delay(7000);

     lcd.clear();
     lcd.print("Thank you!");
     delay(3000);

     lcd.clear();
     lcd.setCursor(0,0);
     lcd.print("Welcome to our");
     
     lcd.setCursor(0,1);
     lcd.print("house!");
     }

     if(maskCheck==0)
     {
     lcd.setCursor(0,0);
     lcd.print("Please wear mask");
     delay(5000);
     lcd.clear();

     lcd.print("Please stand in ");
     lcd.setCursor(0,1);
     lcd.print("front of camera");
     }
     
  } 
     void loop()
 { 
 
 }
