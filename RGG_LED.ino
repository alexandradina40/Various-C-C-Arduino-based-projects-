int limitar=0;
int limitag=0;
int numarrandom=0;
int limitab=0;
int numarator1=0;
int numarator2=0; 
int RGBLED_RedPin = 5;
int RGBLED_GreenPin = 6;
int RGBLED_BluePin = 7; 
void setup() 
{
 
 
  pinMode(RGBLED_RedPin,OUTPUT);
  pinMode(RGBLED_GreenPin,OUTPUT);
  pinMode(RGBLED_BluePin,OUTPUT);
}



void loop() 
{
    delayMicroseconds(10);
    if(numarator1>=100)
    {
      numarator1=0;
      numarator2++;
    }
    else
    {
      numarator1++;
    }
  
    if(numarator2>=50)
    {
      numarator2=0;
      
      numarrandom=random(100);
      if(numarrandom>=30)
      {
         limitar++;
      } 

      if(limitar>=100){
        limitar=0;
      }
      
      numarrandom=random(100);
      if(numarrandom>=50)
      {
         limitag++;
      }

      if(limitag>=100){
        limitag=0;
      }
      
      numarrandom=random(100);
      if(numarrandom>=80)
      {
         limitab++;
      }

      if(limitab>=100){
        limitab=0;
      }
      
      
    }
  
  if(limitar<numarator1)
  {
    digitalWrite(RGBLED_RedPin,HIGH);
  }
  else
  {
    digitalWrite(RGBLED_RedPin,LOW);
  }
  
   if(limitag<numarator1)
  {
    digitalWrite(RGBLED_GreenPin,HIGH);
  }
  else
  {
    digitalWrite(RGBLED_GreenPin,LOW);
  }
  
   if(limitab<numarator1)
  {
    digitalWrite(RGBLED_BluePin,HIGH);
  }
  else
  {
    digitalWrite(RGBLED_BluePin,LOW);
  }
  

}
