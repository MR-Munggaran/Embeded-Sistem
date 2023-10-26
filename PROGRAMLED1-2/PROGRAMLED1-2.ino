int led13 = 13;
int led12 = 12;
int led11 = 11;

int IRsensor = 8;
int IRsensor2 = 2;



int a = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(IRsensor, INPUT);
  pinMode(IRsensor2, INPUT);
  pinMode(led13,OUTPUT);
  pinMode(led12,OUTPUT);
  pinMode(led11,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int IR = digitalRead(IRsensor);
  int IR2 = digitalRead(IRsensor2);
  if(IR == 0)
  {
    digitalWrite(led13,HIGH);
    a = a + 1;
    if(a > 10 ){
    a = 10;
    }
    Serial.print("Jumlahnya =");
    Serial.println(a);
    delay(200);
  }
  else if(IR2 == 0){
   digitalWrite(led11,HIGH);
   digitalWrite(led12,HIGH);
   a = a - 1;
   if(a < 0 ){
    a = 0;
   }
   Serial.print("Jumlahnya =");
   Serial.println(a);

   delay(200);
  }
  else if(IR == 0 && IR2 == 0){
    digitalWrite(led11,HIGH);
    a = a;
    Serial.print("Jumlahnya =");
    Serial.println(a);
  }
  else{
   digitalWrite(led11,LOW);
   digitalWrite(led12,LOW);
   digitalWrite(led13,LOW);
  }
}
