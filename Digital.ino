#define LED_BUILTIN 2
#define INPUT_PIN 23

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(INPUT_PIN, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  if ( digitalRead(INPUT_PIN) == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("This Pin IS HIGH");.
  }
  else {
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("This Pin IS LOW");
  }
}
