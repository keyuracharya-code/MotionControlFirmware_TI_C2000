
#include <xdc/std.h>
#include <xdc/runtime/System.h>
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Task.h>

#include "stdint.h"
#include "F28x_Project.h"
#include "SystemInit.h"


#ifdef __cplusplus
    #pragma DATA_SECTION("Cla1ToCpuMsgRAM")
    float result;
    #pragma DATA_SECTION(A,"CpuToCla1MsgRAM");
    float init;
#else
    #pragma DATA_SECTION(result,"Cla1ToCpuMsgRAM")
    float result;
    #pragma DATA_SECTION(init,"CpuToCla1MsgRAM")
    float init;
#endif

/*
 *  ======== taskFxn ========
 */
 #ifndef __cplusplus
     #ifdef __TI_COMPILER_VERSION__
         #if __TI_COMPILER_VERSION__ >= 15009000
             #pragma CODE_SECTION(taskFxn, ".TI.ramfunc");
         #else
             #pragma CODE_SECTION(taskFxn, "ramfuncs");
         #endif
     #endif
 #endif
Void taskFxn(UArg a0, UArg a1)
{
  uint16_t adcres = 0;
  for(;;){
	  static uint16_t i = 0;
    adcres = AdcaResultRegs.ADCRESULT0;
		GpioDataRegs.GPADAT.bit.GPIO31 = 1;
    System_printf("ADC res: %d\n", (int16_t)adcres);
    Task_sleep(500);
		GpioDataRegs.GPADAT.bit.GPIO31 = 0;
    Task_sleep(500);
    System_printf("exit taskFxn(): %d\n", i);
    i += 1;
  }
}

/*
 *  ======== main ========
 */
Int main()
{

  //SystemFullInit();
  InitSysCtrl();
  CLA_ConfigClaMemory();
  CLA_InitCpu1Cla1();
  GPIO_GroupInit();
  ADC_GroupInit();
  EPWM_GroupInit();

  // use ROV->SysMin to view the characters in the circular buffer
  System_printf("enter main()\n");

  init = 1;

  // start EPWM1
  EALLOW;
  EPwm1Regs.ETSEL.bit.SOCAEN  = 1;
  EPwm1Regs.TBCTL.bit.CTRMODE = 0;
  EDIS;

  // start scheduler, does not return
  BIOS_start();
  return(0);
}
