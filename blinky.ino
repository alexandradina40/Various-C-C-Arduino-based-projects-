int x,timp;
void setup() {
  pinMode(4,OUTPUT);
  x=0;
  timp=0;
}

void loop() 
{
  if(timp>=500)
  {
    x++;
    timp=0;
  }
  if(x>=100)
  {
    x=0;
  }
  
  digitalWrite(4,HIGH);
  delayMicroseconds(x);
  digitalWrite(4,LOW);
  delayMicroseconds(100-x);
  
  timp++;
}
