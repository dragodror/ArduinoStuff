/*
 
Created by ArduinoGetStarted.com*
This example code is in the public domain
*
Tutorial page: https://arduinogetstarted.com/tutorials/arduino-rgb-led
*/

int r = 0;
int g = 0;
int b = 0;
int frek = 0;

//Notes
int NoteA = 440;
int NoteC = 523;
int NoteE = 480;
int NoteD = 300;

int generateRandom(int tmp)
{
  
  tmp = rand() % 50;
  return tmp;
}

int generateTone(int tmpTone)
{
  tmpTone = 5000 + rand() % 14000;
  return tmpTone;
}
int randomTone()
{
  int tmp = 0;
  tmp = 1 + rand() % 4;

  if(tmp == 1)
    return NoteA;
  if(tmp == 2)
    return NoteC;
  if(tmp == 3)
    return NoteE;
  if(tmp == 4)
    return NoteD;
}
const int buzzerPin = 3;
const int PIN_RED   = 5;
const int PIN_GREEN = 6;
const int PIN_BLUE  = 9;

void setup() {
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // color code #00C9CC (R = 0,   G = 201, B = 204)
  r = generateRandom(r);  g = generateRandom(g);  b = generateRandom(g);
  frek = generateTone(tone);

  analogWrite(PIN_RED,   248*0.25);
  analogWrite(PIN_GREEN, 20*0.25);
  analogWrite(PIN_BLUE,  10*0.25);
  analogWrite(buzzerPin, randomTone());

  delay(1000); // keep the color 1 second

  analogWrite(PIN_RED,   248);
  analogWrite(PIN_GREEN, 20);
  analogWrite(PIN_BLUE,  10);
  analogWrite(buzzerPin, randomTone());

  delay(1000);
  
}
