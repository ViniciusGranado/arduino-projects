const int redPin = 6;
const int redPot = A0;
float redLevel = 0;

const int bluePin = 5;
const int bluePot = A1;
float blueLevel = 0;

const int greenPin = 3;
const int greenPot = A2;
float greenLevel = 0;


void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(redPot, INPUT);
  
  pinMode(bluePin, OUTPUT);
  pinMode(bluePin, INPUT);

  pinMode(greenPin, OUTPUT);
  pinMode(greenPin, INPUT);
}

void loop() {
  redLevel = map(analogRead(redPot), 0, 1023, 0, 255);
  blueLevel = map(analogRead(bluePot), 0, 1023, 0, 255);
  greenLevel = map(analogRead(greenPot), 0, 1023, 0, 255);

  setRGB(redLevel, blueLevel, greenLevel);
}

void setRGB(float red, float blue, float green) {
  analogWrite(redPin, redLevel);
  analogWrite(bluePin, blueLevel);
  analogWrite(greenPin, greenLevel);
}
