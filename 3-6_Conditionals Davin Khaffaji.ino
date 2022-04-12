int currentColorValueGreen;
int currentColorValueRed;
const int redPin = 11;
const int bluePin = 9;
const int greenPin = 10;
int currentColorValueBlue;
const int potPin = A0;
void setup()
{
	pinMode(bluePin, OUTPUT);
	pinMode(greenPin, OUTPUT);
	pinMode(redPin, OUTPUT);
}
void loop()
{
  int potPinValue = map(analogRead(potPin), 0, 1024, 0, 255);	
  if (potPinValue <= 42.5) {
		currentColorValueRed = 255;
		currentColorValueGreen = potPinValue * 6;
		currentColorValueBlue = 0;
   } 
   if ((potPinValue > 42.5) && (potPinValue <= 85)) {
		currentColorValueRed = 255 - (potPinValue - 43) * 6;
		currentColorValueGreen = 255;
		currentColorValueBlue = 0;
   }
   if ((potPinValue > 85) && (potPinValue <= 127.5)) {
		currentColorValueRed = 0;
		currentColorValueGreen = 255;
		currentColorValueBlue = (potPinValue - 85) * 6;
   }
   if ((potPinValue > 127.5) && (potPinValue <= 170)) {
		currentColorValueRed = 0;}
