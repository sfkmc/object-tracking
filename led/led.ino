int led1=2;
int led2=4;
int led3=5;
int led4=6;
int led5=7;
int led6=8;
int led7=9;
int led8=10;
int led9=11;
void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);

}

void loop() {
{
 int a = Serial.read();
if (a == '1'){
    digitalWrite(led1, HIGH);
  }
  else{
    digitalWrite(led1, LOW);
  }
  if (a == '2'){
    digitalWrite(led2, HIGH);
  }
  else{
    digitalWrite(led2, LOW);
  }if (a == '3'){
    digitalWrite(led3, HIGH);
  }
  else{
    digitalWrite(led3, LOW);
  }if (a == '4'){
    digitalWrite(led4, HIGH);
  }
  else{
    digitalWrite(led4, LOW);
  }if (a == '5'){
    digitalWrite(led5, HIGH);
  }
  else{
    digitalWrite(led5, LOW);
  }if (a == '6'){
    digitalWrite(led6, HIGH);
  }
  else{
    digitalWrite(led6, LOW);
  }if (a == '7'){
    digitalWrite(led7, HIGH);
  }
  else{
    digitalWrite(led7, LOW);
  }if (a == '8'){
    digitalWrite(led8, HIGH);
  }
  else{
    digitalWrite(led8, LOW);
  }if (a == '9'){
    digitalWrite(led9, HIGH);
  }
  else{
    digitalWrite(led9, LOW);
  }
  
}
delay(50);
}
