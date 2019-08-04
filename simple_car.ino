int D0=7;
int D1=8;
int D2=9;
int D3=10;
void setup() 
{
  pinMode(D0,OUTPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
}

void loop() 
{
  digitalWrite(D0,HIGH);
  digitalWrite(D2,HIGH);
  digitalWrite(D1,LOW);
  digitalWrite(D3,LOW);
  delay(10000);
  digitalWrite(D1,HIGH);
  digitalWrite(D3,HIGH);
  digitalWrite(D0,LOW);
  digitalWrite(D2,LOW);
  delay(10000);
  digitalWrite(D0,HIGH);
  digitalWrite(D3,HIGH);
  digitalWrite(D1,LOW);
  digitalWrite(D2,LOW);
  delay(10000);
  digitalWrite(D1,HIGH);
  digitalWrite(D2,HIGH);
  digitalWrite(D0,LOW);
  digitalWrite(D3,LOW);
  delay(10000);
  
}
