/*
 By:Farkad Adnan
 E-mail: farkad.hpfa95@gmail.com
 inst : farkadadnan
 #farkadadnan , #farkad_adnan , فرقد عدنان#
 FaceBook: كتاب عالم الاردوينو
 inst : arduinobook
 #كتاب_عالم_الاردوينو  #كتاب_عالم_الآردوينو 
 */
#include <Servo.h>
#define S0 2
#define S1 3
#define S2 4
#define S3 5
#define sensorOut 6

Servo topServo;
Servo bottomServo;
int frequency = 0;
int color=0;

void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);

  digitalWrite(S0, HIGH);
  digitalWrite(S1, LOW);

  topServo.attach(7);
  bottomServo.attach(8);

  Serial.begin(9600);
}
void loop() {
  topServo.write(115);
  delay(500);
  for(int i = 115; i > 65; i--) {
    topServo.write(i);
    delay(2);
  }
  delay(500);
  
  color = readColor();
  delay(10);  

  switch (color) {
    case 1:
    bottomServo.write(50);
    break;

    case 2:
    bottomServo.write(75);
    break;

    case 3:
    bottomServo.write(100);
    break;

    case 4:
    bottomServo.write(125);
    break;

    case 5:
    bottomServo.write(150);
    break;

    case 6:
    bottomServo.write(175);
    break;
    
    case 0:
    break;
  }
  delay(300);
  
  for(int i = 65; i > 29; i--) {
    topServo.write(i);
    delay(2);
  } 
  delay(200);
  
  for(int i = 29; i < 115; i++) {
    topServo.write(i);
    delay(2);
  }
  color=0;
}
int readColor() {
  digitalWrite(S2, LOW);
  digitalWrite(S3, LOW);
  frequency = pulseIn(sensorOut, LOW);
  int R = frequency;
  Serial.print("R= ");
  Serial.print(frequency);
  Serial.print("  ");
  delay(50);
  digitalWrite(S2, HIGH);
  digitalWrite(S3, HIGH);
  frequency = pulseIn(sensorOut, LOW);
  int G = frequency;
  Serial.print("G= ");
  Serial.print(frequency);
  Serial.print("  ");
  delay(50);
  digitalWrite(S2, LOW);
  digitalWrite(S3, HIGH);
  frequency = pulseIn(sensorOut, LOW);
  int B = frequency;
  Serial.print("B= ");
  Serial.print(frequency);
  Serial.println("  ");
  delay(50);
  if(R<45 & R>32 & G<65 & G>55){
    color = 1; // Red
  }
  if(G<55 & G>43 & B<47 &B>35){
    color = 2; // Orange
  }
  if(R<53 & R>40 & G<53 & G>40){
    color = 3; // Green
  }
  if(R<38 & R>24 & G<44 & G>30){
    color = 4; // Yellow
  }
  if(R<56 & R>46 & G<65 & G>55){
    color = 5; // Brown
  }
  if (G<58 & G>45 & B<40 &B>26){
    color = 6; // Blue
  }
  return color;  
}
