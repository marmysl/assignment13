// Initializations
int Blue = 2;
int Green = 3;
int Yellow = 4;
int SW = 9;
int SW_state = 0;

void setup() {
  // setup code
  pinMode(Blue, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(SW, INPUT_PULLUP);
}

void loop() {
  digitalWrite(Blue, LOW);   // all LEDs off when button is not pressed
  digitalWrite(Green, LOW);  
  digitalWrite(Yellow, LOW);
  
  // Read from switch
  SW_state = digitalRead(SW);
  
  if (SW_state == 1) {
    digitalWrite(Blue, HIGH);   // turn the blue LED on
    digitalWrite(Green, LOW);  
    digitalWrite(Yellow, LOW);
    delay(25);                
    digitalWrite(Blue, LOW);   // turn the green LED on
    digitalWrite(Green, HIGH);  
    digitalWrite(Yellow, LOW);
    delay(25); 
    digitalWrite(Blue, LOW);   // turn the yellow LED on
    digitalWrite(Green, LOW);  
    digitalWrite(Yellow, HIGH);
    delay(25);
  }
   
}
