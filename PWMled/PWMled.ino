int led[2] = {11, 10};
int bright = 0;
int bright2 = 255;
int brightstep = 5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    for(int j = 0; j < 255; j+=5)
    {
      analogWrite(led[0], bright);
      analogWrite(led[1], bright2);
      bright += brightstep;
      bright2 -= brightstep;
      delay(50);
    }
    for(int j = 250; j > -1; j-=5)
    {
      analogWrite(led[0], bright);
      analogWrite(led[1], bright2);
      bright -= brightstep;
      bright2 += brightstep;
      delay(50);
    }
    analogWrite(led[0], 0);
    analogWrite(led[1], 255);
}
