#ifndef __BOSCH_BMA2X2_H
#define __BOSCH_BMA2X2_H
#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif


	
#define TWI_READ_BIT                 (0x01)        //!< If this bit is set in the address field, transfer direction is from slave to master.

#define TWI_ISSUE_STOP               ((bool)true)  //!< Parameter for @ref twi_master_transfer
#define TWI_DONT_ISSUE_STOP          ((bool)false) //!< Parameter for @ref twi_master_transfer

//typedef void (*FuncPtr)(void);

void bma2x2_power_on(uint8_t threshold);
void bma2x2_power_off(void);
int8_t bm2x2_check_chipid(void);


#ifdef __cplusplus
}
#endif

#endif

