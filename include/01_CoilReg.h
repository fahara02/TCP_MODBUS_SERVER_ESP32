

//Coil set function
uint16_t cbCoilSet(TRegister* reg, uint16_t val) {

  //Serial.println(String("CoilSet1 val: ") + String(val));

  return val;
}
//Coil get function
//coil Address 0
uint16_t C0CoilGet(TRegister* reg, uint16_t val0) {
  C_val_0 = val0;
  Serial.println("COIL0 VALUE SET TO = "); Serial.println(C_val_0);
  Serial.println("------------Trigger coil0---------------");
  return val0;
}
//coil Address 1
uint16_t C1CoilGet(TRegister* reg, uint16_t val1) {
  C_val_1 = val1;
  Serial.println("COIL1 VALUE SET TO = "); Serial.println(C_val_1);
  Serial.println("------------Trigger coil1---------------");
  return val1;
}

//coil Address 2
uint16_t C2CoilGet(TRegister* reg, uint16_t val2) {
  C_val_2 = val2;
  Serial.println("COIL2 VALUE SET TO ="); Serial.println(C_val_2);
  Serial.println("------------Trigger coil2---------------");
  return val2;
}

//coil Address 3
uint16_t C3CoilGet(TRegister* reg, uint16_t val3) {
  C_val_3 = val3;
  Serial.println("COIL3 VALUE SET TO = "); Serial.println(C_val_3);
  Serial.println("------------Trigger coil3---------------");
  return val3;
}

