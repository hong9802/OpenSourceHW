#include <IRremote.h>
int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;
int delaytime[5] = {100, 500, 1000, 1500, 2000};
int delays = 100;
void setup()
{
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  irrecv.enableIRIn();
}
void loop() {
  if (irrecv.decode(&results)) 
  {
    Serial.println(results.value, HEX);
    if(results.value == 0xFF6897)
    {
      delays = delaytime[0];
    }
    else if(results.value == 0xFF30CF)
    {
      delays = delaytime[1];
    }
    else if(results.value == 0xFF18E7)
    {
      delays = delaytime[2];
    }
    else if(results.value == 0xFF7A85)
    {
      delays = delaytime[3];
    }
    else if(results.value == 0xFF10EF)
    {
      delays = delaytime[4];
    }
    irrecv.resume(); //Receive the next value
    }
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(delays);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(delays);
}
