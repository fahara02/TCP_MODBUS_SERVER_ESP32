// this example is public domain. enjoy! https://learn.adafruit.com/thermocouple/

#include "max6675.h"

MAX6675 thermocouple(thermoSCK, thermoCS, thermoSO);

float  read_temp_cel(){

   
   float  temp_cel=thermocouple.readCelsius();
   return temp_cel;


}

unsigned long temp_loop_max_interval=1000;
int nan_flag=0;
//---------------------------------------------------------------------------------------------------------------
void update_temp()
{ loop:
  // if ((unsigned long)(now - previousMillis) > temp_loop_max_interval){
  //    previousMillis = now; 

  // }
  

  //-----------------check if valid temp received---------
  if (isnan(thermo_temp_t)) {
    Serial.println("***no temperature***");
    delay(1000);
    digitalWrite(valid_read_pin,LOW);
    goto loop ;
  }
  //---------------------------------------------------------------------
  else {
    Serial.println("valid temperature read");
    Serial.print("Temp = ");
    Serial.println(thermo_temp_t);
    thermo_temp_t = read_temp_cel();
    if (thermo_temp_t>0 ){
    digitalWrite(valid_read_pin,HIGH);
    }
    return;
  }
}// End update_temp
//-------------------------------------------------------------------------------------------------------------