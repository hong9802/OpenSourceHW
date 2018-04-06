int green = 12;
int yellow = 8;
int red = 7;
int i = 0;
int ledtime[4] = {1000, 500, 250, 125};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  for(i = 0; i < 4; i++)
  {
    if(i == 4) 
    {
      i = 0;
      break;
    }
    digitalWrite(green, HIGH);
    delay(ledtime[i]);
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(ledtime[i]);
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(ledtime[i]);
    digitalWrite(red, LOW);
    Serial.println(i);
  }
}
