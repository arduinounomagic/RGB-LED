//with analog pins and common anode type RGB led
//connect all 3 rgb with 1k ohm resisor
//connect common anode terminal with 5 volt pin
//
/*1st code
*How to operate the RGB LED using Arduino uno
*(how red, green, blue, white colors can be generated)
*
*for more detail about this project please visit:
*
*Copyright (C) 2007 Free Software Foundation, Inc. <arduinounomagic@gmail.com>
*
*for more projects based on Arduino uno please visit:
*/

//configure the PWM pins
int redInput=11;
int greenInput=9;
int blueInput=6;

void setup() //define the output pins
{
  
 pinMode(redInput, OUTPUT);
 pinMode(greenInput, OUTPUT);
 pinMode(blueInput, OUTPUT);

}

void loop() //generates the different color according to the provided values
{
  ledColor(0, 255, 255);// red
  delay(1000);
  ledColor(255, 0, 255); //green
  delay(1000);
 ledColor(255, 255, 0);// blue
  delay(1000);
  ledColor(0, 0, 0);//white
  delay(1000);

}
void ledColor(int red, int green, int blue)
{
analogWrite(redInput, red);
analogWrite(greenInput, green);
analogWrite(blueInput, blue);

}