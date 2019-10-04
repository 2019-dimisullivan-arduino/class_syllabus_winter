int Red = 7;
int Green = 8;
int Blue = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);
}

void loop() {
  // 차례로 켜기
  digitalWrite(Red,HIGH);
  delay(333);
  digitalWrite(Green, HIGH);
  delay(333);
  digitalWrite(Blue, HIGH);
  delay(333);

  //하나씩 켜기
  digitalWrite(Red,HIGH);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, LOW);
  delay(333);
  digitalWrite(Red,LOW);
  digitalWrite(Green, HIGH);
  digitalWrite(Blue, LOW);
  delay(333);
  digitalWrite(Red,LOW);
  digitalWrite(Green, LOW);
  digitalWrite(Blue, HIGH);
  delay(333);

  //추가 : 신호등 만들어보기 
}
