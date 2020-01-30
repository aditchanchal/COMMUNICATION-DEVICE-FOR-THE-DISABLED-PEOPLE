#include<SoftwareSerial.h>
const int analogInPin1 = A0;
const int analogInPin2 = A1;
const int analogInPin3 = A2;
const int analogInPin4 = A3;
const int analogInPin5 = A4;
SoftwareSerial bt(2,3);
int a=0,b=0,c=0,d=0,e=0,f=0;
int option1=0,option2=0;
int
sensorValue1=0,sensorValue2=0,sensorValue3=0,sensorValue4=0,sensorValue5=0;
int t1=520,t2=520,t3=520,t4=480,t5=520;
void setup()
{
Serial.begin(9600);
bt.begin(9600);
bt.write("Choose an Option \n 1 Letter \n 2 Word");
while(f==0)
{
sensorValue1 = analogRead(analogInPin1);
sensorValue2 = analogRead(analogInPin2);
sensorValue3 = analogRead(analogInPin3);
sensorValue4 = analogRead(analogInPin4);
sensorValue5 = analogRead(analogInPin5);
Serial.print(sensorValue1);
Serial.print(" ");
Serial.print(sensorValue2);
Serial.print(" ");
Serial.print(sensorValue3);
Serial.print(" ");
Serial.print(sensorValue4);
Serial.print(" ");
Serial.println(sensorValue5);
if(sensorValue1>t1)
a=1;
else
a=0;
if(sensorValue2>t2)
b=1;
else
b=0;
if(sensorValue3>t3)
c=1;
else
c=0;
if(sensorValue4>t4)
d=1;
else
d=0;
if(sensorValue5>t5)
e=1;
else
e=0;
if(a==1&&b==0&&c==1&&d==1&&e==1)
{
option1=1;
f=1;
bt.write("Letter Selected \n ");
}
else if(a==1&&b==0&&c==0&&d==1&&e==1)
{
option2=1;
f=1;
bt.write("Word Selected \n");
}
}
delay(2000);
bt.write("Make a Gesture ");
delay(2000);
}
void loop()
{
sensorValue1 = analogRead(analogInPin1);
sensorValue2 = analogRead(analogInPin2);
sensorValue3 = analogRead(analogInPin3);
sensorValue4 = analogRead(analogInPin4);
sensorValue5 = analogRead(analogInPin5);
Serial.print(sensorValue1);
Serial.print(" ");
Serial.print(sensorValue2);
Serial.print(" ");
Serial.print(sensorValue3);
Serial.print(" ");
Serial.print(sensorValue4);
Serial.print(" ");
Serial.println(sensorValue5);
if(sensorValue1>t1)
a=1;
else
a=0;
if(sensorValue2>t2)
b=1;
else
b=0;
if(sensorValue3>t3)
c=1;
else
c=0;
if(sensorValue4>t4)
d=1;
else
d=0;
if(sensorValue5>t5)
e=1;
else
e=0;
if(option1==1)
{
if(a==0&&b==0&&c==0&&d==0&&e==0)
bt.write(" ");
else if(a==0&&b==1&&c==1&&d==1&&e==1)
bt.write("A");
else if(a==1&&b==0&&c==1&&d==1&&e==1)
bt.write("B");
else if(a==1&&b==1&&c==0&&d==1&&e==1)
bt.write("C");
else if(a==1&&b==1&&c==1&&d==0&&e==1)
bt.write("D");
else if(a==1&&b==1&&c==1&&d==1&&e==0)
bt.write("E");
else if(a==0&&b==0&&c==1&&d==1&&e==1)
bt.write("F");
else if(a==0&&b==1&&c==0&&d==1&&e==1)
bt.write("G");
else if(a==0&&b==1&&c==1&&d==0&&e==1)
bt.write("H");
else if(a==0&&b==1&&c==1&&d==1&&e==0)
bt.write("I");
else if(a==1&&b==0&&c==0&&d==1&&e==1)
bt.write("J");
else if(a==1&&b==0&&c==1&&d==0&&e==1)
bt.write("K");
else if(a==1&&b==0&&c==1&&d==1&&e==0)
bt.write("L");
else if(a==1&&b==1&&c==0&&d==0&&e==1)
bt.write("M");
else if(a==1&&b==1&&c==0&&d==1&&e==0)
bt.write("N");
else if(a==1&&b==1&&c==1&&d==0&&e==0)
bt.write("O");
else if(a==0&&b==0&&c==0&&d==1&&e==1)
bt.write("P");
else if(a==0&&b==0&&c==1&&d==0&&e==1)
bt.write("Q");
else if(a==0&&b==0&&c==1&&d==1&&e==0)
bt.write("R");
else if(a==0&&b==1&&c==0&&d==0&&e==1)
bt.write("S");
else if(a==0&&b==1&&c==0&&d==1&&e==0)
bt.write("T");
else if(a==0&&b==1&&c==1&&d==0&&e==0)
bt.write("U");
else if(a==1&&b==0&&c==0&&d==0&&e==1)
bt.write("V");
else if(a==1&&b==0&&c==0&&d==1&&e==0)
bt.write("W");
else if(a==1&&b==0&&c==1&&d==0&&e==0)
bt.write("X");
else if(a==1&&b==1&&c==0&&d==0&&e==0)
bt.write("Y");
else if(a==0&&b==0&&c==0&&d==0&&e==1)
bt.write("Z");
else
bt.write("Invalid Sign");
}
else
{
if(a==0&&b==0&&c==0&&d==0&&e==0)
bt.write(" ");
else if(a==0&&b==1&&c==1&&d==1&&e==1)
bt.write("Water");
else if(a==1&&b==0&&c==1&&d==1&&e==1)
bt.write("Food");
else if(a==1&&b==1&&c==0&&d==1&&e==1)
bt.write("Milk");
else if(a==1&&b==1&&c==1&&d==0&&e==1)
bt.write("Pen");
else if(a==1&&b==1&&c==1&&d==1&&e==0)
bt.write("Book");
else if(a==0&&b==0&&c==1&&d==1&&e==1)
bt.write("Eat");
else if(a==0&&b==1&&c==0&&d==1&&e==1)
bt.write("Drink");
else if(a==0&&b==1&&c==1&&d==0&&e==1)
bt.write("Yes");
else if(a==0&&b==1&&c==1&&d==1&&e==0)
bt.write("No");
else if(a==1&&b==0&&c==0&&d==1&&e==1)
bt.write("OK");
else if(a==1&&b==0&&c==1&&d==0&&e==1)
bt.write("Come");
else if(a==1&&b==0&&c==1&&d==1&&e==0)
bt.write("Get");
else if(a==1&&b==1&&c==0&&d==0&&e==1)
bt.write("Give");
else if(a==1&&b==1&&c==0&&d==1&&e==0)
bt.write("Take");
else if(a==1&&b==1&&c==1&&d==0&&e==0)
bt.write("Help");
else if(a==0&&b==0&&c==0&&d==1&&e==1)
bt.write("Hello");
else if(a==0&&b==0&&c==1&&d==0&&e==1)
bt.write("Toilet");
else if(a==0&&b==0&&c==1&&d==1&&e==0)
bt.write("Work");
else if(a==0&&b==1&&c==0&&d==0&&e==1)
bt.write("Go");
else if(a==0&&b==1&&c==0&&d==1&&e==0)
bt.write("Thank You");
else if(a==0&&b==1&&c==1&&d==0&&e==0)
bt.write("Sorry");
else if(a==1&&b==0&&c==0&&d==0&&e==1)
bt.write("Fine");
else if(a==1&&b==0&&c==0&&d==1&&e==0)
bt.write("Sick");
else if(a==1&&b==0&&c==1&&d==0&&e==0)
bt.write("Rest");
else if(a==1&&b==1&&c==0&&d==0&&e==0)
bt.write("Sleep");
else if(a==0&&b==0&&c==0&&d==0&&e==1)
bt.write("Time");
else if(a==0&&b==0&&c==0&&d==1&&e==0)
bt.write("Busy");
else if(a==0&&b==0&&c==1&&d==0&&e==0)
bt.write("Stop");
else if(a==0&&b==1&&c==0&&d==0&&e==0)
bt.write("Home");
else if(a==1&&b==0&&c==0&&d==0&&e==0)
bt.write("Play");
else if(a==1&&b==1&&c==1&&d==1&&e==1)
bt.write("Clean");
}
delay(3500);
}