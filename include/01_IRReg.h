

//IR set function
uint16_t cbIRSet(TRegister* reg, uint16_t val) {

  //Serial.println(String("IR VALUE : ") + String(val));

  return val;
}
//IR get function
//IR Address 0
uint16_t IR0Get(TRegister* reg, uint16_t val0) {
  IR_val_0=val0;
  Serial.print("IR0 Value is...= "); Serial.println(IR_val_0);
  return val0;
}

uint16_t IR1Get(TRegister* reg, uint16_t val1) {
  IR_val_1=val1;
  Serial.print("IR1 Value is...= "); Serial.println(IR_val_1);
  return val1;
}

uint16_t IR2Get(TRegister* reg, uint16_t val2) {
  IR_val_2=val2;
  Serial.print("IR2Value is...= "); Serial.println(IR_val_2);
  return val2;
}

uint16_t IR3Get(TRegister* reg, uint16_t val3) {
  IR_val_3=val3;
  Serial.print("IR3 Value is...= "); Serial.println(IR_val_3);
  return val3;
}