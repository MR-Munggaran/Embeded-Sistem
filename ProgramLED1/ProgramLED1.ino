int led13 = 13;
int led12 = 12;
int led11 = 11;
int led10 = 10;
int led9 = 9;
int IRsensor = 8;

void setup() {
  pinMode(led13,OUTPUT);
  pinMode(led12,OUTPUT);
  pinMode(led11,OUTPUT);
  pinMode(led10,OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(IRsensor,INPUT);

  
  
}

void loop() {
  if(digitalRead(IRsensor) == 0)
  {
  digitalWrite(led13,HIGH);
  digitalWrite(led12,HIGH);
  digitalWrite(led11,HIGH);
  digitalWrite(led10,HIGH);
  digitalWrite(led9,HIGH);
//  delay(1000);
//  digitalWrite(led13,LOW);
//  delay(1000);
//  digitalWrite(led12,LOW);
//  delay(1000);
//  digitalWrite(led11,LOW);
//  delay(1000);
//  digitalWrite(led10,LOW);
//  delay(1000);
//  digitalWrite(led9,LOW);
//  delay(1000);
  }else{
  digitalWrite(led13,LOW);
  digitalWrite(led12,LOW);
  digitalWrite(led11,LOW);
  digitalWrite(led10,LOW);
  digitalWrite(led9, LOW);
//  digitalWrite(led9,HIGH);
//  delay(1000);
//  digitalWrite(led10,HIGH);
//  delay(1000);
//  digitalWrite(led11,HIGH);
//  delay(1000);
//  digitalWrite(led12,HIGH);
//  delay(1000);
//  digitalWrite(led13,HIGH);
//  delay(1000);
  }
  

}
