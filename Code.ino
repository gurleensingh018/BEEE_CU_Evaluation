int sensorpin=A0;
const int LED1=8;
const int LED2=9;
void setup()
{
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  for(int i=1;i>0;i++)
  {
  int sensorvalue= analogRead(sensorpin);
  Serial.print(sensorvalue);
  if(sensorvalue<100)
  {
    digitalWrite(LED2,HIGH);
    delay(500);
    digitalWrite(LED1,LOW);
  }
  else
  {
    digitalWrite(LED1,HIGH);
    delay(500);
    digitalWrite(LED2,LOW);
  }
  }
}