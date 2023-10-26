int led = 13;
int PIRout = 8;
int buzzer = 7;
int PIRstat = LOW;
int PIRval = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(PIRout, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  PIRval=digitalRead(PIRout);
  Serial.print("Nilai:");
  Serial.println(PIRval);
  delay(100);
  if(PIRval==HIGH)
  {
    digitalWrite(led, HIGH);
    delay(100);

    if(PIRstat==LOW);
    {
     Serial.println("Gerakan Terdeteksi");
     PIRstat=HIGH;
     tone(7, 0);
     delay(100);
    }
  }else
    {
     digitalWrite(led,LOW);
     delay(100);

     if(PIRstat==HIGH);{
      Serial.println("Gerakan Tidak Terdeteksi");
      PIRstat=LOW;
      noTone(buzzer);
      delay(100);
     }
    }

 }
