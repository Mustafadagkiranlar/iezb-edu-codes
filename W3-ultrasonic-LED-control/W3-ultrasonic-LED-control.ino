const int trig_pin = 9;
const int echo_pin = 10;
const int green_pin=1;
const int yellow_pin=2;
const int buzzer=7;
const int red_pin=3;

float duration, distance;

void setup() {
  pinMode(trig_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
  pinMode(yellow_pin, OUTPUT);
  pinMode(red_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);

  duration = pulseIn(echo_pin, HIGH);
  distance = (duration*.0343)/2;
  Serial.print("UZAKLIK: ");
  Serial.println(distance);
  delay(100);

  if( distance<=30 && distance>=20){
    digitalWrite(green_pin,HIGH);
    digitalWrite(yellow_pin,LOW);
    digitalWrite(red_pin,LOW);
     noTone(buzzer);
  }else if(distance<20 && distance>=10){
    digitalWrite(green_pin,HIGH);
    digitalWrite(yellow_pin,HIGH);
    digitalWrite(red_pin,LOW);
     noTone(buzzer);
  }else if(distance<10 && distance>5){
    digitalWrite(green_pin,HIGH);
    digitalWrite(yellow_pin,HIGH);
    digitalWrite(red_pin,HIGH);
    tone(buzzer, 1000);
  }else{
    digitalWrite(green_pin,LOW);
    digitalWrite(yellow_pin,LOW);
    digitalWrite(red_pin,LOW);
    noTone(buzzer);
    }
}
