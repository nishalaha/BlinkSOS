int LED = 13;
void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level) 
  delay(500);                       // wait for half a second 
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW 
  delay(1000);                     // wait for a second   
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);  
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);  
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1500); //with the space between the letters
  digitalWrite(LED_BUILTIN, HIGH); //o in mose code
  delay(2000); //o in mose code 
  digitalWrite(LED_BUILTIN, LOW);   
  delay(500); 
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(2000); 
  digitalWrite(LED_BUILTIN, LOW);   
  delay(500); 
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(2000); 
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1500); //space
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level) 
  delay(500);                       // wait for half a second 
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW 
  delay(1000);                     // wait for a second   
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);  
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);  
  digitalWrite(LED_BUILTIN, LOW);    
  delay(1000); 
       
}
