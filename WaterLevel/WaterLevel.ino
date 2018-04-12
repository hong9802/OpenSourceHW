int buzzer = 8;
int led = 9;
int waterSensor = A0;
int waterLevel = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  waterLevel = analogRead(waterSensor)/4;
  Serial.println(waterLevel);
  if(waterLevel > 150)
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
  }
  else if(waterLevel > 130 && waterLevel < 150)
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
    delay(100);
  }
  else if(waterLevel > 70 && waterLevel < 130)
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
    delay(500);
  }
  else if(waterLevel > 30 && waterLevel < 70)
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, LOW);
    delay(1000);
  }
  delay(500);
}
