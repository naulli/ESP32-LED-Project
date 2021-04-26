int state = 0;
int i;

void setup()  {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(14, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(32, OUTPUT);
}

void pattern1(){
  digitalWrite(14, HIGH);           // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(14, LOW);            // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  digitalWrite(25, HIGH);            // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(25, LOW);             // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  digitalWrite(32, HIGH);           // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(32, LOW);            // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a 
  digitalWrite(14, HIGH);           // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(14, LOW);            // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  digitalWrite(25, HIGH);            // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(25, LOW);             // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  digitalWrite(32, HIGH);           // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(32, LOW);            // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a 
}

void pattern2(){
      digitalWrite(14, HIGH);           // turn the LED on (HIGH is the voltage level)
      delay(250);                       // wait for a second
      digitalWrite(14, LOW);            // turn the LED off by making the voltage LOW
      delay(250);                       // wait for a second
      digitalWrite(25, HIGH);            // turn the LED on (HIGH is the voltage level)
      delay(250);                       // wait for a second
      digitalWrite(25, LOW);             // turn the LED off by making the voltage LOW
      delay(250);                       // wait for a second
      digitalWrite(32, HIGH);           // turn the LED on (HIGH is the voltage level)
      delay(250);                       // wait for a second
      digitalWrite(32, LOW);            // turn the LED off by making the voltage LOW
      delay(250);                       // wait for a 
}
void pattern3(){
      digitalWrite(14, HIGH);           // turn the LED on (HIGH is the voltage level)
      delay(100);                       // wait for a second
      digitalWrite(25, HIGH);            // turn the LED on (HIGH is the voltage level)
      delay(100);                       // wait for a second
      digitalWrite(32, HIGH);           // turn the LED on (HIGH is the voltage level)
      delay(100);                       // wait for a second
      digitalWrite(32, LOW);            // turn the LED off by making the voltage LOW
      delay(100);                       // wait for a                    
      digitalWrite(25, LOW);             // turn the LED off by making the voltage LOW
      delay(100);                       // wait for a 
      digitalWrite(14, LOW);            // turn the LED off by making the voltage LOW
      delay(100);                       // wait for a 
      digitalWrite(14, HIGH);           // turn the LED on (HIGH is the voltage level)
      delay(100);                       // wait for a second
      digitalWrite(25, HIGH);            // turn the LED on (HIGH is the voltage level)
      delay(100);                       // wait for a second
      digitalWrite(32, HIGH);           // turn the LED on (HIGH is the voltage level)
      delay(100);                       // wait for a second
      digitalWrite(32, LOW);            // turn the LED off by making the voltage LOW
      delay(100);                       // wait for a                    
      digitalWrite(25, LOW);             // turn the LED off by making the voltage LOW
      delay(100);                       // wait for a 
      digitalWrite(14, LOW);            // turn the LED off by making the voltage LOW
      delay(100);                       // wait for a 
}

void loop() {
 pattern1();
 delay(1000)  ;   
 pattern2();
 delay(1000)  ;
 pattern3();
 delay(1000)  ;                                                         
  
}
