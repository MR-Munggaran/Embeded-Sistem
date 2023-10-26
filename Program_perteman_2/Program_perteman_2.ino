int led = 3;
const int trig = 9;
const int echo = 8;
long durasi;
int jarak;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  digitalWrite(led,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  durasi=pulseIn(echo,HIGH);
  jarak = 0.017 * durasi;
  Serial.print("Durasi = "); Serial.println(durasi);
  delay(300);

  if(durasi < 1000){
    digitalWrite(led,HIGH);
    Serial.print("Jarak = "); Serial.print(jarak);
    Serial.println(" Cm");
    Serial.println(" ");
    delay(300);
  }else{
    digitalWrite(led,LOW);
    Serial.print("Jarak = "); Serial.print(jarak);
    Serial.println(" Cm");
    Serial.println(" ");
    delay(300);
  }
  

}
