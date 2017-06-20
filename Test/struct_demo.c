#include <stdio.h>
#include <stdlib.h>



#define sensor_wr_func_ptr char (* bus_write)(void)
#define sensor_rd_func_ptr char (* bus_read)(void)

#define sensor_bus_red_func(void)\
			bus_read(void)


typedef struct{
	sensor_wr_func_ptr;
	sensor_rd_func_ptr;
}sensor_t;

sensor_t *psensor;

char sensor_write(void)
{
	printf("enter sensor write\r\n");
}


char sensor_read(void)
{
	printf("enter sensor read\r\n");
}

void init_sensor(sensor_t *sensor)
{
	psensor = sensor;
//	psensor->bus_write = sensor_write;
	psensor->bus_read = sensor_read;


	psensor->sensor_bus_red_func();
	
}

int main(int argc, char* argv[])
{

	sensor_t sensor;
	init_sensor(&sensor);
	
	printf("%d\r\n",argc);
	return 0;
}
