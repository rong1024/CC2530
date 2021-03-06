#ifndef __SYSPOWER_H_
#define __SYSPOWER_H_
    #include <ioCC2530.h>
    
    typedef enum SYSPOWER{
      ACTICE_IDLE = 0,
      POWER_MODE1 = 1,
      POWER_MODE2 = 2,
      POWER_MODE3 = 3
    }ENUM_SYSPOWER;
    extern void sysPowerMode(ENUM_SYSPOWER mode);
    extern void initSleepTimer();
    extern void Set_ST_Period(unsigned int sec);
    extern void setStIsrFun(void (*ST_ISR_Fum)(void));
#endif