uint16_t lastSVal;
uint16_t HVal1;
uint16_t HoldregSet(TRegister* reg, uint16_t val) {
  if (lastSVal != val) {
    lastSVal = val;  
  }

  
  return val;
}


//Holding register 0 Read data event callback function Address 0
uint16_t D0HoldregGet (TRegister* reg, uint16_t val0) {
   if (val0 = 0){
      read_temp_flag=0;
    
    }

    if (val0 = 1){
      read_temp_flag=1;
    
    }


    else {
      read_temp_flag=0;

    }





  //Serial.println(String("HregGet0 val:") + String(val0));
  return val0;
}
//Holding register 1 Read data event callback function Address 1
uint16_t D1HoldregGet (TRegister* reg, uint16_t val1) {
  Serial.println(String("HregGet1 val:") + String(val1));
  return val1;
}



//Holding register 200 Read data event callback function 
uint16_t D200HoldregGet (TRegister* reg, uint16_t val200) {
  Serial.println(String("HregGet200 val:") + String(val200));

//check and set valid data for valid input only
  if (val200 <= 0){
      pwm_freq=pwm_min_freq;
    
    }

  if (val200 >= pwm_max_freq){
      pwm_freq=pwm_max_freq;
    
    }  


   if (val200 > 0 & val200 < pwm_max_freq) {
      pwm_freq=val200;
    
    } 
  else  {
      pwm_freq=pwm_min_freq;
    
    }













  return val200;
}

//Holding register 201 Read data event callback function 
uint16_t D201HoldregGet (TRegister* reg, uint16_t val201) {
  Serial.println(String("HregGet201 val:") + String(val201));
  return val201;
}

//Holding register 202 Read data event callback function 
uint16_t D202HoldregGet (TRegister* reg, uint16_t val202) {
  Serial.println(String("HregGet202 val:") + String(val202));
  return val202;
}



//Holding register 203 Read data event callback function 
uint16_t D203HoldregGet (TRegister* reg, uint16_t val203) {



//check and set valid data for valid input only
  if (val203 <= 0){
      pwm_duty=25;
    
    }

  if (val203 >= 255){
      pwm_duty=255;
    
    }  


   if (val203 > 0 & val203 < 255) {
      pwm_duty=val203;
    
    } 
  else  {
      pwm_duty=0;
    
    }

  Serial.println(String("HregGet203 val:") + String(val203));
  return val203;
}





