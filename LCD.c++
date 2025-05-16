Atividade 1:
#include <LiquidCrystal.h>

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);
void setup()
{ lcd_1.begin(16, 2);
lcd_1.clear();
}
void loop()
{
lcd_1.setCursor(0, 0);
lcd_1.print("hello");
lcd_1.setCursor(2, 1);
lcd_1.print("world");
delay(10); // Delay a little bit to improve simulation performance
}



Atividade 2: 
#include <LiquidCrystal.h>

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);
void setup()
{ lcd_1.begin(16, 2);
lcd_1.clear();
Serial.begin(9600);
}
void loop()
{
 int variavel;
 
  for (variavel = 0;variavel<16;variavel++)
    {
     Serial.println(variavel);
     lcd_1.setCursor(variavel,0);
     lcd_1.print("*");
     delay(300);
    lcd_1.clear();
    delay(200);
    
    
    }
  
Serial.println("cheguei");
  for (variavel = 15; variavel>-1;variavel--)
  {
     Serial.println(variavel);
     lcd_1.setCursor(variavel,1);
     lcd_1.print("*");
     delay(300);
     lcd_1.clear();
     delay(200);

}
}

Atividade 3: 

#include <LiquidCrystal.h>

LiquidCrystal lcd_1(12, 11, 5, 4, 3, 2);
void setup()
{ lcd_1.begin(16, 2);
lcd_1.clear();
Serial.begin(9600);
pinMode(6, INPUT);
pinMode(7, INPUT);
pinMode(8, INPUT);
}
void loop()
{
 int var;
 int var2 = 15;
 
 
  if (digitalRead(6) == HIGH ){
    delay(100);
    for (var = 0; var<16; var++){
       lcd_1.setCursor(var,0);
       lcd_1.print("*");
       delay(300);
       lcd_1.clear();
      
   }

  }
  

  if (digitalRead(7) == HIGH ){
    delay(100);
    for (var = 15; var>-1; var--){
       lcd_1.setCursor(var,1);
       lcd_1.print("*");
       delay(300);
       lcd_1.clear();
       
    }

  }
  if (digitalRead(8) == HIGH) {
    delay(100);
    for (var= 0; var<16;var++){
      lcd_1.setCursor(var,0);
       lcd_1.print("*");
      lcd_1.setCursor(var2,1);
       lcd_1.print("*");
       delay(300);
       lcd_1.clear();
       var2--;
    }
  }
  
  
}
