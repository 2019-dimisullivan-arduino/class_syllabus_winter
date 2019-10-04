int LED = 7;
int button = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int btn = digitalRead(button);
  if(btn == HIGH){
    digitalWrite(LED, HIGH);
  }else {
    digitalWrite(LED, LOW);
  }
}
