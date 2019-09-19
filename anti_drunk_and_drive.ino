

/* #define ledr 2;
#define ledg 3;
#define buzzer 5;
#define alcohol 9;  */

void setup()
{
 pinMode(7,INPUT);     // alcohol 
 pinMode(5,OUTPUT);   // buzzer 
 pinMode(2,OUTPUT);   // red led
 pinMode(3,OUTPUT);   // green led

Serial.begin(9600);

}
void loop()
{
   if(digitalRead(7)==0)  // alcohol value detect
   {
    digitalWrite(5,0);   // buzzer on 
    digitalWrite(2,0);   // red led on
    digitalWrite(3,1);   // green led off
    Serial.println("Alcohol  detected");
    delay(1000);
   }
   else
   {
    digitalWrite(5,1);  //buzzer off
    digitalWrite(2,1);  //red off
    digitalWrite(3,0);  //green led on
    Serial.println("Alcohol not detected");
   }
   }
