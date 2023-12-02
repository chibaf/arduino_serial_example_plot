void setup()
{
  // initialize serial comms
  Serial.begin(9600); 
}

int i=0;
float x;
float pi=3.1415927; 
void loop()
{
  if (i==99) i=0;
  x=pi*float(i)/50.0;
  i=i+1;
  delay(100);
  Serial.println(sin(x));
}
