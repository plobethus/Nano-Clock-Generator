void setup() {
  // put your setup code here, to run once:
  pinMode(4,OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(A4, INPUT);
  int potPin = A4;
  int T = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(4, HIGH);
  int T = 0;
  T = analogRead(A4);
  if (T < 341){                  
  digitalWrite(10,HIGH);
  delay(10);
  digitalWrite(10,LOW);
  delay(10);
  }
  else if (T < 682) {
  digitalWrite(10, HIGH);
  delay(300);
  digitalWrite(10,LOW);
  delay(300);
  }
  else{
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  delay(1000);
  }
}   
  

