#define RED_LED 9
#define YELLOW_LED 8

void setup() {

  pinMode (RED_LED, OUTPUT);
  pinMode (YELLOW_LED, OUTPUT);

  digitalWrite(RED_LED, LOW);
  digitalWrite(YELLOW_LED, LOW);
}

void loop() {

  digitalWrite(YELLOW_LED, HIGH);
  delay(750);
  digitalWrite(YELLOW_LED, LOW);
  delay(350);
  digitalWrite(RED_LED, HIGH);
  delay(400);
  digitalWrite(RED_LED, LOW);
  delay(600);
}
