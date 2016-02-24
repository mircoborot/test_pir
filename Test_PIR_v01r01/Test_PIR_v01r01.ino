
/* ---------------------------------------------------------
Package     :  wifs v.1
Module      :  tester pir
Copyright   :  (c) 2016 by Antonio Curci 

Copyright 2014-2016 by Antonio Curci. All rights reserved.
Redistribution and use in source and binary forms,
with or without modification, are not permitted.
-------------------------------------------------------- */

#define pr(a,b) {Serial.print(a);Serial.print(b);}

const byte PIN_PIR = 5;   

void pirsetup() {
  pinMode(PIN_PIR,INPUT);
  Serial.begin(9600);
  pr("\r\nTester sensor PIR v.01.01 \n(C) Copyright 2014-2016 by Curci\r\n","\nCommands: none\n"); 
} 

byte pirin() {return digitalRead(PIN_PIR);}

void setup() {pirsetup();}

//byte n=0;
void loop() {
  pr(millis()/1000,"   ");
  pr(pirin(),"\n");
  //pr(n,"\n");
  delay(1000); 
}
