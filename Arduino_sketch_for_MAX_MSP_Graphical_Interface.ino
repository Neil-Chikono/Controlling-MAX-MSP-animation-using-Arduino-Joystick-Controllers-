//define the pins being used to read the value from the potentiometers
// the value being read by analogRead will be 0-1023. This value can be scaled in arduino but I shall scale it in max/msp so the Arduino can keep running without
//disrutping the patch #define potPin1 AO
#define potPin2 A1
#define potPin3 A2
#define potPin4 A3
#define potPin5 A4
#define potPin6 A5
//potVal shall store the value being read by analogRead and shall then be sent to the serial monitor via Serial. print
//max/msp will then receive the changing value of the potentiometers and other sensors via serial data
int potVal1;
int potVal2;
int potVal3;
int potVal4;
int potVal5;
int potVal6;
int delayTime = 500;
//Joysticks
// store values from analogRead and mapped value
int joyVal1;
int angell ; int joyVal2; int angel2; int joyVal3; int angel3 ; int joyVal4; int angel4; int joyVal5; int angels ; int joyVal6; int angel6; int joyVal7; int angel? ; int joyVal8;
int angel8;

//joystlck one (left controller)
define yAxis1 A1
#define xAxis1 A15
///jyostick two (right controller)
#define yAxis A13
#define xAxis2 A12
///joystick three (left controller)
#define yAxis3 A11
#define xAxis3 A10
///jyostick four (right controller)
#define yAxis4 A9
#define xAxis4 A8
void setup {
// put your setup code here, to run once:
Serial.begin (9600);
void loop) {
//read the value of left joystick (between 0 - 1023)
joyVal1 = analogRead(xAxis1);
angel1 = map(joyVal1, 0, 1023, 0, 180); // servo value between 0-180
joyVal2 = analogRead(yAxis1);
ange12 = map(joyVal2, 0, 1023, 0, 180); // servo value between 0-180

joyVal2 = analogRead(yAxis1);
angel2 = map(joyVal2, 0, 1023, 0, 180); // servo value between 0-180
yVal3 = analogRead(xAxis2
gel3 = map(joyVal3, 0, 1023, 0, 180); // servo value between 0-1
joyVal4 = analogRead(xAxis2);
angel4 = map(joyVal4, 0, 1023, 0, 180); // servo value between 0-180
joyVal5 = analogRead(xAxis3);
angel5 = map(joyVal5, 0, 1023, 0, 180); // servo value between 0-180
joyVal6 = analogRead(xAxis3);
angel6 = map(joyVal6, 0, 1023, 0, 180); // servo value between 0-180
joyVal7 = analogRead(xAxis4);
angel7 = map(joyVal7, 0, 1023, 0, 180); // servo value between 0-180
joyVal8 = analogRead(xAxis4);
angel8 = map(joyVal8, 0, 1023, 0, 180); // servo value between 0-180
potVall = analogRead(potPin1);
potVal2 = analogRead(potPin2);
potVal3 = analogRead(potPin3);
potVal4 = analogRead(potPin4);
potVal5 = analogRead(potPin5);
potVal6 = analogRead(potPin6);
// print values in serial monitor
Serial.print(joyVal1);
Serial.print(" ");
Serial.print(joyVal2);
Serial.print(" ");
Serial.print(joyVal3);

Serial.print(" ");
Serial.print(joyVal4);
Serial.print(" ");
Serial.print(joyVal5);
Serial.print(" ");
Serial.print(potVal1);
Serial.print(" ");
Serial.print(potVal2);
Serial.print(" ");
Serial.print(potVal3);
Serial.print(" ");
Serial.print(potVal4);
Serial.print(" ");
Serial.print(potVal5);
Serial.print(" ");
Serial.println(potVal6);
delay(delayTime);
// put your main code here, to run repeatedly:
}
