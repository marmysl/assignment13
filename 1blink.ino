// Initializations
int LED1 = 7;
int SW = 9;
int SW_state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(SW, INPUT_PULLUP);
}

void loop() {
  // Read from switch
  SW_state = digitalRead(SW);

  if (SW_state == 1) {
    digitalWrite(LED1, HIGH);   // turn the LED on
    delay(50);                
    digitalWrite(LED1, LOW);    // turn the LED off
    delay(50); 
  }
   
}
