//Setting Global defaults


int read_temp_flag=0;
// setting default PWM properties( for storage under holding register)
 const int pwm_min_freq=500;
 const int pwm_max_freq=1000;
 int pwm_freq = 500;
 int pwm_ledChannel = 0;
 int pwm_resolution = 8;
 int pwm_duty = 0;


//thermocouple temp
 float thermo_temp_t =0;

//GLOBAL VARIABLES FOR COIL DATA
int C_val_0;
int C_val_1;
int C_val_2;
int C_val_3;

bool I_val_0;
bool I_val_1;


int IR_val_0;
int IR_val_1;
int IR_val_2;
int IR_val_3;