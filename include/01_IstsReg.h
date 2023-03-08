

//ISt set function
uint16_t cbIstsSet(TRegister* reg, bool val) {

  //Serial.println(String("IR VALUE : ") + String(val));

  return val;
}
//ISt get function
//ISt Address 0
uint16_t Ists1Get(TRegister* reg, bool val0) {
  I_val_0=digitalRead(Ist0_pin);
  //val0=I_val_0;
  Serial.print("SWITCH1 Value is...= "); Serial.println(val0);
  return val0;
}


uint16_t Ists2Get(TRegister* reg, bool val1) {
  I_val_1=digitalRead(Ist1_pin);
 // val1=I_val_1;
  Serial.print("SWITCH2 Value is...= "); Serial.println(val1);
  return val1;
}

// uint16_t Ists3Get(TRegister* reg, bool val3) {
  
//   Serial.print("SWITCH3 Value is...= "); Serial.println(val3);
//   return val3;
// }
// uint16_t Ists4Get(TRegister* reg, bool val4) {
  
//   Serial.print("SWITCH4 Value is...= "); Serial.println(val4);
//   return val4;
// }

