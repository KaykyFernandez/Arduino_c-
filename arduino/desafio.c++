// C++ code
int cinco = 0;
int dez = 0;
int vinte = 0;
int cinquenta = 0;
int cem = 0;
int valorTotal = 0;
void setup()
{
  pinMode(13, INPUT);
  pinMode(7, INPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
}
void loop()
{
  if (digitalRead(13) == HIGH ) {
     valorTotal += 5;
     Serial.print("Total: ");
     Serial.println(valorTotal); 
     delay(100);
  }
  if (digitalRead(7) == HIGH ) {
     valorTotal += 10;
      Serial.print("Total: ");
     Serial.println(valorTotal); 
     delay(100);
  }
  if (digitalRead(2) == HIGH ) {
   if (valorTotal >= 100){
     cem = abs(valorTotal/100);
     valorTotal = valorTotal % 100;
    }
    
    
    

  
  
  digitalWrite(2,digitalRead(7));
  delay(100); // Delay a little bit to improve simulation performance
}

if (valorTotal >= 50){
     cinquenta =  abs(valorTotal/50);
      valorTotal = valorTotal % 50;
    }
    if (valorTotal >= 20){
     vinte = abs(valorTotal/20);
      valorTotal = valorTotal % 20;
    }
    if (valorTotal >= 10){
     dez = abs(valorTotal/10);
      valorTotal = valorTotal % 10;
    }
    if (valorTotal >= 5){
     cinco = abs(valorTotal/5);
      valorTotal = valorTotal % 5;
    }
    delay(1000);
    Serial.print("Cinco: ");
    Serial.println(cinco);
    Serial.print("Dez: ");
    Serial.println(dez);
    Serial.print("vinte: ");
    Serial.println(vinte);
Serial.print("cinquenta: ");
    Serial.println(cinquenta);
    Serial.print("cem: ");
Serial.println(cem);
    valorTotal = 0;
    cinco = 0;
    dez = 0;
    vinte = 0;
cinquenta = 0;
    cem = 0;
  }