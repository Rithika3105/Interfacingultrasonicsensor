int tx;
int rx;
long time;
int distance;
 
void setup()
{
  pinMode(10, OUTPUT);
  pinMode(9, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(10,LOW);
  delay(2000); 
  digitalWrite(10, HIGH);
  delay(1000);// Wait for 1000 millisecond(s)
  digitalWrite(10,LOW);
  time=pulseIn(9,HIGH);
  distance=time*0.034/2;
  Serial.print("Distance:");
  Serial.println(distance);
}