

/*contadores y variables*/
float tiempo, tiempo2, tiempo3, tiempo4, tiempo5, tiempo6, tiempo7, tiempo8, tiempo9, tiempo10, 
TiempoFinal, TiempoFinal2, TiempoFinal3, TiempoFinal4, TiempoFinal5, TiempoFinal6, TiempoFinal7, TiempoFinal8, TiempoFinal9;

/*Pantalla LCD*/
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,10,5,4,3,2);

void setup()
{
  pinMode(3, OUTPUT); /*Salida de LEDS PWM*/
  lcd.begin(16,2);
  Serial.begin(9600);
 
}

void loop() {

lcd.setCursor(0,1);
int sensorValue1 = analogRead(A0);
int sensorValue2 = analogRead(A1);
int sensorValue3 = analogRead(A2);
int sensorValue4 = analogRead(A3);
int sensorValue5 = analogRead(A4);
int sensorValue6 = analogRead(A5);
int sensorValue7 = analogRead(A6);
int sensorValue8 = analogRead(A7);
int sensorValue9 = analogRead(A8);
int sensorValue10 = analogRead(A10);
float voltage1 = sensorValue1 * (5.0 / 1023.0);
float voltage2 = sensorValue2 * (5.0 / 1023.0);
float voltage3 = sensorValue3 * (5.0 / 1023.0);
float voltage4 = sensorValue4 * (5.0 / 1023.0);
float voltage5 = sensorValue5 * (5.0 / 1023.0);
float voltage6 = sensorValue6 * (5.0 / 1023.0);
float voltage7 = sensorValue7 * (5.0 / 1023.0);
float voltage8 = sensorValue8 * (5.0 / 1023.0);
float voltage9 = sensorValue9 * (5.0 / 1023.0);
float voltage10 = sensorValue10 * (5.0 / 1023.0);


//cuando el sensor 1 sube el voltaje comenzará a tomar el tiempo1

if(voltage1>3&&voltage2<3&&voltage3<3&&voltage4<3&&voltage5<3&&voltage6<3&&voltage7<3&&voltage8<3&&voltage9<3&&voltage10<3)
{
  tiempo=millis();
  tiempo=tiempo/1000;
  
}

//cuando el sensor2 suba el voltaje comenzará a tomar el tiempo2 y calculará el tiempo final

if(voltage1<3&&voltage2>3&&voltage3<3&&voltage4<3&&voltage5<3&&voltage6<3&&voltage7<3&&voltage8<3&&voltage9<3&&voltage10<3)
{
  tiempo2=millis();
  tiempo2=tiempo2/1000;
  TiempoFinal=(tiempo2-tiempo);
  Serial.print("T12:  ");
  Serial.println(TiempoFinal,10);


}




//subida de voltaje del sensor3 y calculo del tiempofinal23

if(voltage1<3&&voltage2<3&&voltage3>3&&voltage4<3&&voltage5<3&&voltage6<3&&voltage7<3&&voltage8<3&&voltage9<3&&voltage10<3)
{
  tiempo3=millis();
  tiempo3=tiempo3/1000;
  TiempoFinal2=(tiempo3-tiempo);
  Serial.print("T23:  ");
  Serial.println(TiempoFinal2,10);


}



// sensor4 sube voltaje y calcula tiempofinal34
if(voltage1<3&&voltage2<3&&voltage3<3&&voltage4>3&&voltage5<3&&voltage6<3&&voltage7<3&&voltage8<3&&voltage9<3&&voltage10<3)
{
  tiempo4=millis();
  tiempo4=tiempo4/1000;
  TiempoFinal3=(tiempo4-tiempo);
  Serial.print("T34  ");
  Serial.println(TiempoFinal3,10);
  }



//sensor5 calcula el tiempofinal45

if(voltage1<3&&voltage2<3&&voltage3<3&&voltage4<3&&voltage5>3&&voltage6<3&&voltage7<3&&voltage8<3&&voltage9<3&&voltage10<3)
{
tiempo5=millis();
tiempo5=tiempo5/1000;
TiempoFinal4=(tiempo5-tiempo);
Serial.print("T45   ");
Serial.println(TiempoFinal4,10);

}




if(voltage1<3&&voltage2<3&&voltage3<3&&voltage4<3&&voltage5<3&&voltage6>3&&voltage7<3&&voltage8<3&&voltage9<3&&voltage10<3)
{
  tiempo6=millis();
  tiempo6=tiempo6/1000;
  TiempoFinal5=(tiempo6-tiempo);
  Serial.print("T56   ");
  Serial.println(TiempoFinal5,10);
}



if(voltage1<3&&voltage2<3&&voltage3<3&&voltage4<3&&voltage5<3&&voltage6<3&&voltage7>3&&voltage8<3&&voltage9<3&&voltage10<3)
{
  tiempo7=millis();
  tiempo7=tiempo7/1000;
 TiempoFinal6=(tiempo7-tiempo);
 Serial.print("T67   ");
 Serial.println(TiempoFinal6,10);

}


if(voltage1<3&&voltage2<3&&voltage3<3&&voltage4<3&&voltage5<3&&voltage6<3&&voltage7<3&&voltage8>3&&voltage9<3&&voltage10<3)
{
  tiempo8=millis();
  tiempo8=tiempo8/1000;
  TiempoFinal7=(tiempo8-tiempo);
  Serial.print("T78   ");
  Serial.println(TiempoFinal7,10);
  
}


if(voltage1<3&&voltage2<3&&voltage3<3&&voltage4<3&&voltage5<3&&voltage6<3&&voltage7<3&&voltage8<3&&voltage9>3&&voltage10<3)
{
  tiempo9=millis();
  tiempo9=tiempo9/1000;
  TiempoFinal8=(tiempo9-tiempo);
  Serial.print("T89   ");
  Serial.println(TiempoFinal8,10);
}

if(voltage1<3&&voltage2<3&&voltage3<3&&voltage4<3&&voltage5<3&&voltage6<3&&voltage7<3&&voltage8<3&&voltage9<3&&voltage10>2.6)
{
  tiempo10=millis();
  tiempo10=tiempo10/1000;
  TiempoFinal9=(tiempo10-tiempo);
  Serial.print("T910   ");
  Serial.println(TiempoFinal9,10);
}

}



