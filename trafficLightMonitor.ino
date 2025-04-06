// Components needed Breadboard, Wires, RYG LED's, Resistors, Arduino uno
// 


int GreenLed = 10;
int YellowLed = 11;
int RedLed = 12;
void setup() {
  // put your setup code here, to run once:
pinMode(GreenLed, OUTPUT);
pinMode(YellowLed, OUTPUT);
pinMode(RedLed, OUTPUT);
digitalWrite(GreenLed, LOW);
digitalWrite(YellowLed, LOW);
digitalWrite(RedLed, LOW);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(GreenLed, LOW);
digitalWrite(YellowLed, HIGH);
digitalWrite(RedLed, LOW);

Serial.println("Light mode: Slow down ");
delay(1000);

// Stop mode

digitalWrite(GreenLed, LOW);
digitalWrite(YellowLed, LOW);
digitalWrite(RedLed, HIGH);
Serial.println("Light mode: Stop ");
delay(2000);

// Go Mode

digitalWrite(GreenLed, HIGH);
digitalWrite(YellowLed, LOW);
digitalWrite(RedLed, LOW);
Serial.println("Light mode: Stop ");
delay(2000);


}
