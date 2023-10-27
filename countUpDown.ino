
int maxUp = 10;
int minDown = 1;
int delayT = 1000;
int start = 5;
int direction = 1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //start = maxUp % minDown;
}

void loop() {
  //start = start + direction;

  if(start>10 || start<1) {
    Serial.println("Change direction");
    direction = direction * (-1);
  }
  start = start + direction;
  
    Serial.println(start);
    delay(1000);
  

  
}
