int red_pin=2;
int yellow_pin=3;
int green_pin=4;
int delay_long=5000;
int delay_short=10;
void setup() {
  // put your setup code here, to run once:
pinMode(red_pin,OUTPUT);
pinMode(yellow_pin,OUTPUT);
pinMode(green_pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
delay(delay_short);
digitalWrite(red_pin,1);
delay(delay_long);
digitalWrite(red_pin,0);
delay(delay_short);
digitalWrite(yellow_pin,1);
delay(1000);
digitalWrite(yellow_pin,0);
delay(delay_short);
digitalWrite(green_pin,1);
delay(delay_long);
digitalWrite(green_pin,0);
}
