const int R_input1 = 2;
const int R_input2 = 3;
const int L_input1 = 5;
const int L_input2 = 4;

const int trig1 = 9;
const int echo1 = 8;
const int trig2 = 11;
const int echo2 = 10;
const int trig3 = 13;
const int echo3 = 12;

int distance1;
int distance2;
int distance3;

long duration;

void Stop() {
  digitalWrite(L_input1, LOW);
  digitalWrite(L_input2, LOW);

  digitalWrite(R_input1, LOW);
  digitalWrite(R_input2, LOW);
}


void Forward() {
  digitalWrite(L_input1, HIGH);
  digitalWrite(L_input2, LOW);

  digitalWrite(R_input1, HIGH);
  digitalWrite(R_input2, LOW);
}

void Left() {
  digitalWrite(L_input1, HIGH);
  digitalWrite(L_input2, LOW);

  digitalWrite(R_input1, LOW);
  digitalWrite(R_input2, LOW);
}


void Right() {
  digitalWrite(L_input1, LOW);
  digitalWrite(L_input2, LOW);

  digitalWrite(R_input1, HIGH);
  digitalWrite(R_input2, LOW);
}


void setup() {

  pinMode(L_input1, OUTPUT);
  pinMode(L_input2, OUTPUT);

  pinMode(R_input1, OUTPUT);
  pinMode(R_input2, OUTPUT);

  pinMode(trig1, OUTPUT);
  pinMode(echo1, INPUT);

  pinMode(trig2, OUTPUT);
  pinMode(echo2, INPUT);

  pinMode(trig3, OUTPUT);
  pinMode(echo3, INPUT);

  Serial.begin(9600);
}

void loop() {

  digitalWrite(trig1, LOW);
  delayMicroseconds(2);
  digitalWrite(trig1, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig1, LOW);
  duration = pulseIn(echo1, HIGH);
  distance1 = duration * 0.034 / 2;

  digitalWrite(trig2, LOW);
  delayMicroseconds(2);
  digitalWrite(trig2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig2, LOW);
  duration = pulseIn(echo2, HIGH);
  distance2 = duration * 0.034 / 2;

  digitalWrite(trig3, LOW);
  delayMicroseconds(2);
  digitalWrite(trig3, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig3, LOW);
  duration = pulseIn(echo3, HIGH);
  distance3 = duration * 0.034 / 2;

  Serial.print("Distance1: ");
  Serial.println(distance1);
  Serial.print("Distance2: ");
  Serial.println(distance2);
  Serial.print("Distance3: ");
  Serial.println(distance3);


  if (distance1 < 40 || distance2 < 40 || distance3 < 40) {
    Stop(); 
  } else if (distance2 < 300 && distance3 < 300) {
    Forward();
  } else if (distance1 < 300) {
    Forward();
  } else if (distance2 < 300) {
    Left(); 
  } else if (distance3 < 300) {
    Right(); 
  } else {
    Stop();
  }
}