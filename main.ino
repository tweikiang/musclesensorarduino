int potpin = 1;
int val;

void setup()
{
pinMode(8, OUTPUT);
Serial.begin(9600);
}
 
void loop()
{
  val = analogRead(potpin);  // reads the value of the sensor (value between 0 and 1023) 
  if(val>150)
    digitalWrite(8, HIGH);
  else
    digitalWrite(8, LOW);  
  Serial.println(val);                        //show in serial reader 

}
