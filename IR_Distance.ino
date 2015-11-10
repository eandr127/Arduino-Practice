/*
  DigitalReadSerial
 Reads a digital input on pin 2, prints the result to the serial monitor

 This example code is in the public domain.
 */


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
 //Initializing for pin directions.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT); 

  //This is to power the board
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);

 
}

// the loop routine runs over and over again forever:
void loop() {

  //Cycle through pins 4 - 7 and check values
  for(int pin = 4; pin <= 7; pin++) {
    // read the input pin:
    int read = digitalRead(pin);
    // print out the state of the pin #
    Serial.print("read");
    Serial.print(pin);
    Serial.print(" = ");
    Serial.println(read);

    if(pin == 4 && read == LOW) {
      tone(8, 110.66);
    }
    else if (pin == 7 && read == LOW) {
      tone(8, 110.66);
    }
    else {
      noTone(8);
    }
  }

  delay(100);        // delays for 100 milliseconds 
  
  
}



