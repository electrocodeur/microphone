int mic = A0;
int led = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(mic, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int valeur = analogRead(mic);
  Serial.println(valeur);
  if(valeur > 513){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }
  delay(50);
}
