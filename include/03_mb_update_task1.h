//Task1 :

int interval = 5000;                                  // send data to the client every 1000ms -> 1s
unsigned long previousMillis = 0; 


void update_mb_Reg( void * pvParameters ) {
  Serial.print("Task1  running on core  regarding modbus tcp");
  Serial.println(xPortGetCoreID());


  int old_C_val_0=0;

  for (;;) {
     
     
     // UPDATE COILS 
    
       if (C_val_0 == 65280 ) {
      //Serial.print("SETTING COIL 0 HIGH ");
      digitalWrite(coilpin_0,HIGH);
      //mb.Coil(0,HIGH);
       }

    if (C_val_0 == 0 ) {
      //Serial.print("SETTING COIL 0 LOW ");
      digitalWrite(coilpin_0,LOW);
     // mb.Coil(0,LOW);
    }
   
     if (C_val_1 == 65280 ) {
     // Serial.print("SETTING COIL 1 HIGH ");
      digitalWrite(coilpin_1,HIGH);
    //  mb.Coil(01,HIGH);
    }

    if (C_val_1 == 0 ) {
    //  Serial.print("SETTING COIL 1 LOW ");
      digitalWrite(coilpin_1,LOW);
     //  mb.Coil(01,LOW);
    }
     if (C_val_2 == 65280 ) {
    // Serial.print("SETTING COIL 2 HIGH ");
      digitalWrite(coilpin_2,HIGH);
      // mb.Coil(02,HIGH);
    }

    if (C_val_2 == 0 ) {
     // Serial.print("SETTING COIL 1 LOW ");
      digitalWrite(coilpin_2,LOW);
        
    }

     if (C_val_3 == 65280 ) {
    // Serial.print("SETTING COIL 3 HIGH ");
      digitalWrite(coilpin_3,HIGH);
       // mb.Coil(03,HIGH);
    }

    if (C_val_3 == 0 ) {
     // Serial.print("SETTING COIL 1 LOW ");
      digitalWrite(coilpin_3,LOW);
     // mb.Coil(03,LOW);
    }  
  
      // UPDATE DIGITAL INPUTS 
     I_val_0=digitalRead(Ist0_pin);
     I_val_1=digitalRead(Ist1_pin);
     mb.Ists(I0, I_val_0);
     mb.Ists(I1, I_val_1);
    
    // UPDATE INPUT REGISTERS 
      mb.Ireg(IR0, analogRead(IR_0_PIN));
      mb.Ireg(IR1, analogRead(IR_1_PIN));
      mb.Ireg(IR2, analogRead(IR_2_PIN));
      mb.Ireg(IR3, analogRead(IR_3_PIN));


   // UPDATE HOLDING REGISTERS 

   
   mb.Hreg(D200, pwm_freq );
   mb.Hreg(D201, pwm_ledChannel );
   mb.Hreg(D202, pwm_resolution);
   mb.Hreg(D203, pwm_duty);
   

  //  // UPDATE ANALOG OUT
  
   
  ledcSetup(pwm_ledChannel, pwm_freq, pwm_resolution);
  ledcWrite(pwm_ledChannel, pwm_duty);

  unsigned long now = millis();                      
  if ((unsigned long)(now - previousMillis) > interval) {
    previousMillis = now; 

    if (read_temp_flag==1){

      update_temp();
    }
    
   
  }

    mb.Hreg(D1, thermo_temp_t );
    
    
   

    delay(100);

  }//End loop
}
