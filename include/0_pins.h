#define RXD2 16
#define TXD2 17


#define valid_read_pin  23  //valid reading from thermocouple

#define thermoSO 19  //VSPI MISO PIN
#define thermoCS 5  //VSPI CS
#define thermoSCK 18 //VSPI_CLK

#define coilpin_0 12   // Relay1
#define coilpin_1 14   // Relay2
#define coilpin_2 27   // Relay3
#define coilpin_3 26    // Relay4



//PWM channels

 #define pwm_pin_0  25  // transistor1
//#define pwm_pin_1 33    // transistor2







#define Ist0_pin  32// input status register1 (24 to 3.3v using pc817)
#define Ist1_pin  33 //  input status register2 (24 to 3.3v using pc817)


//ADC 2 CANT BE USED UNDER WIFI
#define IR_0_PIN  36 // input register1  (220 K to 70K resistor divider used for 10v )
#define IR_1_PIN  39 //  input  register2 (220 K to 70K resistor divider used for 10v)
#define IR_2_PIN 34 //  input register3  (220 K to 70K resistor divider used for 10v )
#define IR_3_PIN 35 //  input register4  (220 K to 70K resistor divider used for 10v )

void io_pin_setup(){
	pinMode(valid_read_pin ,OUTPUT);



	pinMode(coilpin_0,OUTPUT);
	pinMode(coilpin_1,OUTPUT);
	pinMode(coilpin_2,OUTPUT);
	pinMode(coilpin_3,OUTPUT);
	
	
	
	pinMode(Ist0_pin,INPUT_PULLDOWN);
	pinMode(Ist1_pin,INPUT_PULLDOWN);
	
  analogSetPinAttenuation(IR_0_PIN , ADC_11db);
  analogSetPinAttenuation(IR_1_PIN , ADC_11db);
  analogSetPinAttenuation(IR_2_PIN , ADC_11db);
  analogSetPinAttenuation(IR_3_PIN , ADC_11db);
	
 
  // configure LED PWM functionalitites
  
  ledcSetup(pwm_ledChannel, pwm_freq, pwm_resolution);
  ledcWrite(pwm_ledChannel, pwm_duty);
// attach the channel to the GPIO to be controlled
  ledcAttachPin(pwm_pin_0, pwm_ledChannel);
 // ledcAttachPin(pwm_pin_1, pwm_ledChannel);
  
}


