const int buttonPin = 12;
static int blue = 2;
static int bluE = 3;
static int green = 4;
static int greeN = 5;
static int red = 6;
static int reD = 7;

int buttonState = 0;
int ledState = 0;


void setup() {
  //lights
pinMode(red, OUTPUT);
pinMode(reD, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(bluE, OUTPUT);
pinMode(green, OUTPUT);
pinMode(greeN, OUTPUT);

//button
pinMode(buttonPin, INPUT);
}

void loop() {
  //button value
  buttonState = digitalRead(buttonPin);

  //turn button on 
  if (buttonState == HIGH) {
    if (ledState == HIGH) {
     ledState = LOW;
    digitalWrite(red, LOW);
    digitalWrite(reD, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(bluE, LOW);
    digitalWrite(green, LOW);
    digitalWrite(greeN, LOW);
    }
    else {
      ledState = HIGH;
    digitalWrite(red, HIGH);
    digitalWrite(reD, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(bluE, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(greeN, HIGH);
      
    }
  
  } 

}
