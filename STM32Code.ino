HardwareSerial Serial2(PA3,PA2);
#include <String.h>
 
void setup()
{
  Serial2.begin(9600);
}
 
void loop()
{
   
  if (Serial2.available())
    Serial2.println(Serial2.readString());

  delay(500);
} 