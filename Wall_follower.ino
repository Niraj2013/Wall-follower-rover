char Bluetooth = 0;
int IR = 6;
int irVal = 0;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(IR, INPUT);
}
void Forward() {
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
}

void Backward() {
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
}

void Left() {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
}

void Right() {
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
}

void Stop() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}

void loop() {
  Forward();
  // put your main code here, to run repeatedly:
  // irVal = digitalRead(IR);
  // analogWrite(9, 150);
  // analogWrite(10, 150);
  // if (irVal == 0) {
  //   if (Serial.available()) {
  //     Bluetooth = Serial.read();
  //     Serial.print("I recieved - ");
  //     Serial.print(Bluetooth);
  //     if (Bluetooth == 'F') {
  //       Forward();
  //     } else {
  //       Stop();
  //     }
  //   }
  // } else {
  //   digitalWrite(3, HIGH);
  //   digitalWrite(2, LOW);
  //   digitalWrite(4, LOW);
  //   digitalWrite(5, LOW);
  //   delay(150);
  //   digitalWrite(2, LOW);
  //   digitalWrite(3, LOW);
  //   digitalWrite(4, LOW);
  //   digitalWrite(5, HIGH);
  //   delay(150);
  // }
}