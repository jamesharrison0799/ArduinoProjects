 long userNumberDec;
 int userNumberBin;

void setup() {
  Serial.begin(115200);
  Serial.println("--- NUMBER ENCODER ---");

 userInput();
}

void loop() {
  //Serial.println(userNumberDec);
  delay(1500);
}

void userInput() {
  Serial.println("Please enter your number 8 digit number:\n>>>");
  while (Serial.available() == 0) {} //Wait for user input
  userNumberDec = Serial.parseInt();
  binConvert(userNumberDec);
}

long binConvert(long n){

  long userNumberDecArray[8];

  for(int i = 5; i>=0; i--){
    userNumberDecArray[i] = n % 10;
    n /= 10;
  }

  for(int i = 8; i>0; i--){
    Serial.println(userNumberDecArray[i]);
  }
  
  return userNumberDecArray[8];
}
