#include <Arduino.h>
#include "0_global_variables.h"
#include "0_pins.h"
#include <ModbusIP_ESP8266.h>
#include  "01_manage_wifi.h"
#include "read_thermocouple_max6675.h"

//ModbusIP object
ModbusIP mb;
  

#include "01_CoilReg.h"
#include "01_IstsReg.h"
#include "01_HoldingReg.h"
#include "01_IRReg.h"
#include "02_mb_coil_reg_init.h"  

WiFiServer server(80);

TaskHandle_t Task1; 

#include "03_mb_update_task1.h"



void setup() {
  Serial.begin(115200);
 
  wifi_init();
  io_pin_setup();
  mb_ADD_COILS_REGS(mb);
  mb_SET_GET_INIT(mb);
  

  
  
  //Task1 :
  xTaskCreatePinnedToCore(
    update_mb_Reg,   /* Task function. */
    "update mb register",     /* name of task. */
    10000,       /* Stack size of task */
    NULL,        /* parameter of the task */
    1,           /* priority of the task*/
    &Task1,      /* Task handle to keep track of created task */
    0);          /* pin task to core x */
  delay(10);
  
  
   mb.server();
  



  update_temp();



}
 
void loop() {
   
   mb.task();

  
   delay(10);

   while (WiFi.status() != WL_CONNECTED) {
    delay(100);
    Serial.print("disconnected!!!....connecting....");
     wifi_init();


  }



}