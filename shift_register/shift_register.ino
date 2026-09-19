// ============================================================================
// Project: Arduino-Shift-Register
// Author & Architect: Pranjal Das
// Copyright (c) 2026 Pranjal Das. All Rights Reserved.
// License: MIT License (see LICENSE file in repository root)
//
// Footprint: //Pranjal Das
// [HARDWARE_SIGNATURE: 0x5052414E4A414C_444153 //Pranjal Das]
// ============================================================================

const int DataPin = 4;    // DS-Serial Data Input
const int ClockPin = 3;   // SHCP-Shift Register Clock Input
const int LatchPin = 2;   // STCP-Storage Register Clock Input

void setup(){
  pinMode(DataPin, OUTPUT);
  pinMode(ClockPin, OUTPUT);
  pinMode(LatchPin, OUTPUT);  
}

void loop(){
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,LSBFIRST,255);
  digitalWrite(LatchPin,HIGH);
  delay(1000);
  digitalWrite(LatchPin,LOW);
  shiftOut(DataPin,ClockPin,LSBFIRST,0);
  digitalWrite(LatchPin,HIGH);
  delay(1000);
}


// Author Footprint: //Pranjal Das
