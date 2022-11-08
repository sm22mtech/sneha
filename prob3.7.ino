#include <Arduino.h>
//Declaring all variables as integers
int D,C,B,A,a,b,c,d,e,f,g;

//Code released under GNU GPL.  Free to use for anything.
void disp_7447(int D, int C, int B, int A)
{
  a=(!A&&C&&!D) || (A&&!B&&!C&&!D);
  b=(A&&!B&&C&&!D) || (!A&&B&&C&&!D);
  c=(!A&&B&&!C&&!D);
  d=(A&&!B&&!C) || (!A&&!B&&C&&!D) || (A&&B&&C&&!D);
  e=(A&&!D) || (A&&!B&&!C) || (!B&&C&&!D);
  f=(B&&!C&&!D) || (A&&!C&&!D) || (A&&B&&!D);
  g=(A&&B&&C&&!D) || (!B&&!C&&!D);

  digitalWrite(2, a);
  digitalWrite(3, b);
  digitalWrite(4, c);
  digitalWrite(5, d);
  digitalWrite(6, e);
  digitalWrite(7, f);
  digitalWrite(8, g);

}
// the setup function runs once when you press reset or power the board
void setup() {
    
    pinMode(9, INPUT);
    pinMode(10, INPUT);
    pinMode(11, INPUT);
    pinMode(12, INPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
A=digitalRead(9);
B=digitalRead(10);
C=digitalRead(11);
D=digitalRead(12);
disp_7447(D,C,B,A);  
}
//&& is the AND operation
// || is the OR operation
// ! is the NOT operation
