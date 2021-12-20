const int redPin = 5;
const int redPot = A5;

const int bluePin = 6;
const int bluePot = A4;

float redLevel = 0;
float blueLevel = 0;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(redPot, INPUT);
  
  pinMode(bluePin, OUTPUT);
  pinMode(bluePin, INPUT);
}

void loop() {
  redLevel = map(analogRead(redPot), 0, 1023, 0, 255);
  blueLevel = map(analogRead(bluePot), 0, 1023, 0, 255);

  setRGB(redLevel, blueLevel);
}

void setRGB(float red, float blue) {
  analogWrite(redPin, redLevel);
  analogWrite(bluePin, blueLevel);
}
