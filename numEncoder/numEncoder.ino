 long userNumberDec;
 int userNumberBin;

void setup() {
  Serial.begin(115200);
  Serial.println("--- NUMBER ENCODER ---");

 userInput();
}

void loop() {
  Serial.println(userNumberDec);
  delay(1500);
}

void userInput() {
  Serial.println("Please enter your number 8 digit number:\n>>>");
  while (Serial.available() == 0) {} //Wait for user input
  userNumberDec = Serial.parseInt();
}
