#define D0 0       //Holding register Address 0  Hunidity
#define D1 1       //Holding register Address 1  Temperature


//-- Set pwm freq and channel and resolution address
#define D200 200 //Holding register Address for pwm freq
#define D201 201 //Holding register Address for pwm channel
#define D202 202 //Holding register Address for pwm resolution
#define D203 203 //Holding register Address for pwm duty cycle











//Coil Registers Address for Modbus TCP SLAVE
  
  #define C0 0
  #define C1 1
  #define C2 2
  #define C3 3


//INPUT STATUS  Address for Modbus TCP SLAVE
 #define I0  0
 #define I1  1 

 //INPUT REGISTER ADDRESS  Address for Modbus TCP SLAVE
 #define IR0  0
 #define IR1   1 
 #define IR2   2
 #define IR3   3



void mb_ADD_COILS_REGS(ModbusIP mb){
	
  mb.addCoil(C0); 
  mb.addCoil(C1);
  mb.addCoil(C2);
  mb.addCoil(C3);
  
 mb.addIsts(I0);
 mb.addIsts(I1);

  
 mb.addIreg(IR0);
 mb.addIreg(IR1);
 mb.addIreg(IR2);
 mb.addIreg(IR3);

  
  mb.addHreg(D0);//Holding register Address 0  Hunidity
  mb.addHreg(D1);//Holding register Address 1  Temperature

  mb.addHreg(D200);
  mb.addHreg(D201);
  mb.addHreg(D202);
  mb.addHreg(D203);

  

	
	
	
}




void mb_SET_GET_INIT(ModbusIP mb){
     //SET and GET Coils and registers Address  
  mb.onSetCoil(C0, cbCoilSet);
  mb.onSetCoil(C1, cbCoilSet);
  mb.onSetCoil(C2, cbCoilSet);
  mb.onSetCoil(C3, cbCoilSet);
 



  
  mb.onGetCoil(C0, C0CoilGet);
  mb.onGetCoil(C1, C1CoilGet);
  mb.onGetCoil(C2, C2CoilGet);
  mb.onGetCoil(C3, C3CoilGet);

 

  // mb.onSetIsts(I0,cbIstsSet); NO NEED ,ITS REDUNDANT
  // mb.onGetIsts(I0,Ists1Get);
  // mb.onSetIsts(I1,cbIstsSet);
  // mb.onGetIsts(I1,Ists2Get);


  // mb.onSetIsts(I2,cbIstsSet);
  // mb.onGetIsts(I2,Ists3Get);
  // mb.onSetIsts(I3,cbIstsSet);
  // mb.onGetIsts(I3,Ists4Get);






  mb.onSetIreg(IR0,cbIRSet);
  mb.onGetIreg(IR0,IR0Get);
  mb.onSetIreg(IR1,cbIRSet);
  mb.onGetIreg(IR1,IR1Get);
  mb.onSetIreg(IR2,cbIRSet);
  mb.onGetIreg(IR2,IR2Get);
  mb.onSetIreg(IR3,cbIRSet);
  mb.onGetIreg(IR3,IR3Get);
  
   // Holding register
  
  mb.onSetHreg(D0, HoldregSet);
  mb.onGetHreg(D0, D0HoldregGet);

 
  mb.onSetHreg(D1, HoldregSet);
  mb.onGetHreg(D1, D1HoldregGet);

  mb.onSetHreg(D200, HoldregSet);
  mb.onGetHreg(D200, D200HoldregGet);
  mb.Hreg(D200, pwm_freq);//update from global variable

  
  mb.onSetHreg(D201, HoldregSet);
  mb.onGetHreg(D201, D201HoldregGet);
  mb.Hreg(D201, pwm_ledChannel);//update from global variable

  mb.onSetHreg(D202, HoldregSet);
  mb.onGetHreg(D202, D202HoldregGet);
  mb.Hreg(D202, pwm_resolution);//update from global variable

  mb.onSetHreg(D203, HoldregSet);
  mb.onGetHreg(D203, D203HoldregGet);
  mb.Hreg(D203, pwm_duty);//update from global variable
  
 


  





  
}

