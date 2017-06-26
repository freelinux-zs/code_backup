#ifndef  __SENSOR_DRV_H
#define __SENSOR_DRV_H

#include <stdbool.h>
#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

//Global function
/*Configure and initialize*/
int8_t sensor_type_auto_maching_init(void);

/*open sensor Monitor*/
int8_t open_sensor_monitor(uint8_t level);

/*close sensor Monitor*/
uint8_t close_sensor_monitor(void);

#ifdef __cplusplus
}
#endif
#endif

