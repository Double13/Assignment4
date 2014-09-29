/*
Evil.inc industries
Powered by Michael Lammers
*/

// Defining the intergers
const int pinArray[] = {2, 3, 4, 5, 6, 7, 8, 9}; // Range on pins in the pin array
int count = 0;                                   // Define the start value of the counter
int timer = 500;                                 // This timer will change when either speedup or speeddown is pushed


// defining the outputs
void setup(){
  for (count=0;count<8;count++) {             // Defining the pins in the pin array as output's
    pinMode(pinArray[count], OUTPUT);
  }
}
// starting the loop
void loop() {
  digitalWrite(pinArray[0],HIGH);             // Enableing the first led in the programm
  delay(timer);
  for (count=0;count<7;count++) {             // If the value of the counter is between this then...
   digitalWrite(pinArray[count], HIGH);       
   digitalWrite(pinArray[count + 1], HIGH);   // Counting up from the number
   delay(timer);                              // This delay is need or els it will only show 1 led on
   digitalWrite(pinArray[count], LOW);        // Turn of the led that is last in line
  }
  delay(timer);
// there is no start value because this is already here
  for (count=7;count>0;count--) {             // Reverse the prossess
   digitalWrite(pinArray[count], HIGH);
   digitalWrite(pinArray[count - 1], HIGH);   // Counting the counter back again
   delay(timer);                              // This delay is need or els it will only show 1 led on
   digitalWrite(pinArray[count], LOW);
  }
  // no delay needed
}
// closing off


