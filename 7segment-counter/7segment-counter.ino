/*
  Displays the numbers 0-9 on the display, at one second intervals
  Implemented using 5611AH - 8-segment display
  Pin assignment for 5611AH
     G  F com A  B
   __|__|__|__|__|__
  | 10  9  8  7  6  |
  |  1  2  3  4  5  |
   --|--|--|--|--|--
     E  D com C  P
     
  A=7,B=6,C=4,D=2,E=1,F=9,G=10,P=5,com=GND
  LED segment assignment corresponding to pins
    A
   ---
F |   | B
  | G |
   ---
E |   | C
  |   |
   ---  . P
    D
*/
 
// Pin 2-8 is connected to the 7 segments of the display.

int pinA = 8;
int pinB = 9;
int pinC = 4;
int pinD = 3;
int pinE = 2;
int pinF = 7;
int pinG = 6;
int pinP = 5;

/*
int D1 = 10;
int D2 = 11;
int D3 = 12;
int D4 = 13;
*/

void setup() {                
// initialize the digital pins as outputs.
  pinMode(pinA, OUTPUT);     
  pinMode(pinB, OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG, OUTPUT);   
  pinMode(pinP, OUTPUT);   
/*
  pinMode(D1, OUTPUT);  
  pinMode(D2, OUTPUT);  
  pinMode(D3, OUTPUT);  
  pinMode(D4, OUTPUT);  
*/
}

void loop() {
//0
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, LOW);   
  digitalWrite(pinP, LOW);   
  delay(500);               // wait for a second
  
  digitalWrite(pinA, HIGH);   
  digitalWrite(pinB, HIGH);   
  digitalWrite(pinC, HIGH);   
  digitalWrite(pinD, HIGH);   
  digitalWrite(pinE, HIGH);   
  digitalWrite(pinF, HIGH);   
  digitalWrite(pinG, LOW);   
  digitalWrite(pinP, HIGH);   
  delay(500);

////1
//  digitalWrite(pinA, LOW);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, LOW);   
//  digitalWrite(pinE, LOW);   
//  digitalWrite(pinF, LOW);   
//  digitalWrite(pinG, LOW);   
//  digitalWrite(pinP, LOW);  
//  delay(500);               // wait for a second
//
//  digitalWrite(pinA, LOW);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, LOW);   
//  digitalWrite(pinE, LOW);   
//  digitalWrite(pinF, LOW);   
//  digitalWrite(pinG, LOW);   
//  digitalWrite(pinP, HIGH);  
//  delay(500);
//
////2
//  digitalWrite(pinA, HIGH);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, LOW);   
//  digitalWrite(pinD, HIGH);   
//  digitalWrite(pinE, HIGH);   
//  digitalWrite(pinF, LOW);   
//  digitalWrite(pinG, HIGH);   
//  digitalWrite(pinP, LOW);  
//  delay(500);               // wait for a second
//
//  digitalWrite(pinA, HIGH);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, LOW);   
//  digitalWrite(pinD, HIGH);   
//  digitalWrite(pinE, HIGH);   
//  digitalWrite(pinF, LOW);   
//  digitalWrite(pinG, HIGH);   
//  digitalWrite(pinP, HIGH);  
//  delay(500);
//  
////3
//  digitalWrite(pinA, HIGH);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, HIGH);   
//  digitalWrite(pinE, LOW);   
//  digitalWrite(pinF, LOW);   
//  digitalWrite(pinG, HIGH);   
//  digitalWrite(pinP, LOW);  
//  delay(500);               // wait for a second
//
//  digitalWrite(pinA, HIGH);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, HIGH);   
//  digitalWrite(pinE, LOW);   
//  digitalWrite(pinF, LOW);   
//  digitalWrite(pinG, HIGH);   
//  digitalWrite(pinP, HIGH);  
//  delay(500);
//
////4
//  digitalWrite(pinA, LOW);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, LOW);   
//  digitalWrite(pinE, LOW);   
//  digitalWrite(pinF, HIGH);   
//  digitalWrite(pinG, HIGH);   
//  digitalWrite(pinP, LOW);  
//  delay(500);               // wait for a second
//  
//  digitalWrite(pinA, LOW);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, LOW);   
//  digitalWrite(pinE, LOW);   
//  digitalWrite(pinF, HIGH);   
//  digitalWrite(pinG, HIGH);   
//  digitalWrite(pinP, HIGH);  
//  delay(500);
//
////5
//  digitalWrite(pinA, HIGH);   
//  digitalWrite(pinB, LOW);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, HIGH);   
//  digitalWrite(pinE, LOW);   
//  digitalWrite(pinF, HIGH);   
//  digitalWrite(pinG, HIGH);   
//  digitalWrite(pinP, LOW);  
//  delay(500);               // wait for a second
//  
//  digitalWrite(pinA, HIGH);   
//  digitalWrite(pinB, LOW);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, HIGH);   
//  digitalWrite(pinE, LOW);   
//  digitalWrite(pinF, HIGH);   
//  digitalWrite(pinG, HIGH);   
//  digitalWrite(pinP, HIGH);  
//  delay(500);
//
////6
//  digitalWrite(pinA, HIGH);   
//  digitalWrite(pinB, LOW);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, HIGH);   
//  digitalWrite(pinE, HIGH);   
//  digitalWrite(pinF, HIGH);   
//  digitalWrite(pinG, HIGH);   
//  digitalWrite(pinP, LOW);  
//  delay(500);               // wait for a second
//  
//  digitalWrite(pinA, HIGH);   
//  digitalWrite(pinB, LOW);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, HIGH);   
//  digitalWrite(pinE, HIGH);   
//  digitalWrite(pinF, HIGH);   
//  digitalWrite(pinG, HIGH);   
//  digitalWrite(pinP, HIGH);  
//  delay(500);
//  
////7
//  digitalWrite(pinA, HIGH);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, LOW);   
//  digitalWrite(pinE, LOW);   
//  digitalWrite(pinF, LOW);   
//  digitalWrite(pinG, LOW);   
//  digitalWrite(pinP, LOW);  
//  delay(500);               // wait for a second
//  
//  digitalWrite(pinA, HIGH);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, LOW);   
//  digitalWrite(pinE, LOW);   
//  digitalWrite(pinF, LOW);   
//  digitalWrite(pinG, LOW);   
//  digitalWrite(pinP, HIGH);  
//  delay(500);
//    
////8
//  digitalWrite(pinA, HIGH);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, HIGH);   
//  digitalWrite(pinE, HIGH);   
//  digitalWrite(pinF, HIGH);   
//  digitalWrite(pinG, HIGH);   
//  digitalWrite(pinP, LOW);  
//  delay(500);               // wait for a second
//  
//  digitalWrite(pinA, HIGH);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, HIGH);   
//  digitalWrite(pinE, HIGH);   
//  digitalWrite(pinF, HIGH);   
//  digitalWrite(pinG, HIGH);   
//  digitalWrite(pinP, HIGH);  
//  delay(500);
//  
////9
//  digitalWrite(pinA, HIGH);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, HIGH);   
//  digitalWrite(pinE, LOW);   
//  digitalWrite(pinF, HIGH);   
//  digitalWrite(pinG, HIGH);   
//  digitalWrite(pinP, LOW);  
//  delay(500);               // wait for a second
//  
//  digitalWrite(pinA, HIGH);   
//  digitalWrite(pinB, HIGH);   
//  digitalWrite(pinC, HIGH);   
//  digitalWrite(pinD, HIGH);   
//  digitalWrite(pinE, LOW);   
//  digitalWrite(pinF, HIGH);   
//  digitalWrite(pinG, HIGH);   
//  digitalWrite(pinP, HIGH);  
//  delay(500);

}
