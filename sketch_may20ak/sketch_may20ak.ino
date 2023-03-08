#include <LiquidCrystal.h>
LiquidCrystal lcd (5,6,7,8,9,10);

#include <DS3231.h>
DS3231  rtc(SDA, SCL);
Time t;
void setup() {
  pinMode(2,OUTPUT);
  digitalWrite(2,1);
    pinMode(3,OUTPUT);
   
  lcd.begin(16,2);
   Serial.begin(115200);
  rtc.begin();

 // rtc.setDOW(THURSDAY);     // Set Day-of-Week to SUNDAY
 // rtc.setTime(18, 24,5);     // Set the time to 12:00:00 (24hr format)
 // rtc.setDate(21, 5, 2021);
}
void loop() {

  t = rtc.getTime();
  int a=t.mon;
  int b=t.hour;
  int c=t.min;
  int d=t.date;
  
  if(a==1){
    if (d<=10){
  if((b>16 && c>30) || (b>=18) || (b<=5) || (b<7 && c<45)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

else if (d<=20){
  if((b>16 && c>40) || (b>=18) || (b<=5) || (b<7 && c<45)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

    else if (d<=31){
  if((b>16 && c>47) || (b>=18) || (b<=5) || (b<7 && c<35)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  else{
    digitalWrite(2,1);
    digitalWrite(3,0);

    }
    
  
    
  }
     Serial.println("1");
  }
  else if(a==2){
    if (d<=10){
  if((b>16 && c>55) || (b>=18) || (b<=5) || (b<7 && c<25)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

else if (d<=20){
  if((b>16 && c>59) || (b>=18) || (b<=5) || (b<7 && c<15)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

    else if (d<=31){
  if((b>17 && c>7) || (b>=19) || (b<=5) || (b<7 && c<8)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }
  else{
    digitalWrite(2,1);
    digitalWrite(3,0);

  
    }
    

    
  }
     Serial.println("2");
  }
  
 else if(a==3){
    if (d<=10){
  if((b>17 && c>1) || (b>=19) || (b<=4) || (b<6 && c<59)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

else if (d<=20){
  if((b>17 && c>15) || (b>=19) || (b<=4) || (b<6 && c<45)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

    else if (d<=31){
  if((b>17 && c>20) || (b>=19) || (b<=4) || (b<6 && c<35)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

    else{
    digitalWrite(2,1);
    digitalWrite(3,0);

    }
    

    
  }
     Serial.println("3");
  }
  
 else if(a==4){
    if (d<=10){
  if((b>17 && c>23) || (b>=19) || (b<=4) || (b<6 && c<25)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

else if (d<=20){
  if((b>17 && c>29) || (b>=19) || (b<=4) || (b<6 && c<15)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

    else if (d<=31){
  if((b>17 && c>33) || (b>=19) || (b<=3) || (b<5 && c<59)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  else{
    digitalWrite(2,1);
    digitalWrite(3,0);

    }
    
  
    
  }
     Serial.println("4");
  }
  
 else if(a==5){
    if (d<=10){
  if((b>17 && c>37) || (b>=19) || (b<=3) || (b<5 && c<55)){

     digitalWrite(2,0);
    digitalWrite(3,1);
 
  }

  
    }

else if (d<=20){
  if((b>17 && c>42) || (b>=19) || (b<=3) || (b<5 && c<52)){

     digitalWrite(2,0);
    digitalWrite(3,1);
    Serial.println("20");
  }

  
    }

    else if (d<=31){
  if((b>17 && c>48) || (b>=19) || (b<=3) || (b<5 && c<49)){

     digitalWrite(2,0);
    digitalWrite(3,1);
    Serial.println("31");
  }
  else{
    digitalWrite(2,1);
    digitalWrite(3,0);
  
    }
    }

  
  
     Serial.println("5");
 }
 else if(a==6){
    if (d<=10){
  if((b>17 && c>52) || (b>=19) || (b<=3) || (b<5 && c<44)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

else if (d<=20){
  if((b>17 && c>55) || (b>=19) || (b<=3) || (b<5 && c<43)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

    else if (d<=31){
  if((b>17 && c>55) || (b>=19) || (b<=3) || (b<5 && c<48)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }
  else{
    digitalWrite(2,1);
    digitalWrite(3,0);

    
  }
  
    }
    

     Serial.println("6");
  }
  
 else if(a==7){
    if (d<=10){
  if((b>17 && c>54) || (b>=19) || (b<=3) || (b<5 && c<51)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

else if (d<=20){
  if((b>17 && c>53) || (b>=19) || (b<=3) || (b<5 && c<59)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

    else if (d<=31){
  if((b>17 && c>49) || (b>=19) || (b<=4) || (b<6 && c<3)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

    else{
    digitalWrite(2,1);
    digitalWrite(3,0);

    
  }
    }
    

     Serial.println("7");
  }
  
   
 else if(a==8){
    if (d<=10){
  if((b>17 && c>43) || (b>=19) || (b<=4) || (b<6 && c<15)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

else if (d<=20){
  if((b>17 && c>35) || (b>=19) || (b<=4) || (b<6 && c<25)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

    else if (d<=31){
  if((b>17 && c>25) || (b>=19) || (b<=4) || (b<6 && c<24)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }
  else{
    digitalWrite(2,1);
    digitalWrite(3,0);

    
  }
  
    }
    

     Serial.println("8");
  }
  
 else if(a==9){
    if (d<=10){
  if((b>17 && c>14) || (b>=19) || (b<=4) || (b<6 && c<35)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

else if (d<=20){
  if((b>17 && c>5) || (b>=19) || (b<=4) || (b<6 && c<40)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

    else if (d<=31){
  if((b>16 && c>54) || (b>=18) || (b<=4) || (b<6 && c<45)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

   else{
    digitalWrite(2,1);
    digitalWrite(3,0);

    
  }
    }
    
 
     Serial.println("9");
  }
  
  else if(a==10){
    if (d<=10){
  if((b>16 && c>44) || (b>=18) || (b<=4) || (b<6 && c<50)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

else if (d<=20){
  if((b>16 && c>34) || (b>=18) || (b<=4) || (b<6 && c<53)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

    else if (d<=31){
  if((b>16 && c>25) || (b>=18) || (b<=4) || (b<6 && c<59)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

   else{
    digitalWrite(2,1);
    digitalWrite(3,0);

    
  }
    }
    
 
     Serial.println("10");
  }
  
 else if(a==11){
    if (d<=10){
  if((b>16 && c>20) || (b>=18) || (b<=5) || (b<7 && c<7)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

else if (d<=20){
  if((b>16 && c>15) || (b>=18) || (b<=5) || (b<7 && c<13)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

    else if (d<=31){
  if((b>16 && c>13) || (b>=18) || (b<=5) || (b<7 && c<19)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }
 else{
    digitalWrite(2,1);
    digitalWrite(3,0);

    
  }
  
    }
    
 
     Serial.println("11");
  }
  
 else if(a==12){
    if (d<=10){
  if((b>16 && c>15) || (b>=18) || (b<=5) || (b<7 && c<25)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

else if (d<=20){
  if((b>16 && c>20) || (b>=18) || (b<=5) || (b<7 && c<30)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }

  
    }

    else if (d<=31){
  if((b>16 && c>25) || (b>=18) || (b<=5) || (b<7 && c<35)){

     digitalWrite(2,0);
    digitalWrite(3,1);
  }
 else{
    digitalWrite(2,1);
    digitalWrite(3,0);

    
  }
  
    }
    
 
     Serial.println("12");
  }
  
  else{
    digitalWrite(2,1);
    digitalWrite(3,0);
    Serial.println("Nothing else");

    
  }
  
  Serial.print(rtc.getDOWStr());
  Serial.print(" ");
  
  // Send date
  Serial.print(rtc.getDateStr());
  Serial.print(" -- ");

  // Send time
  Serial.println(rtc.getTimeStr());
  delay(250);
  
  }
