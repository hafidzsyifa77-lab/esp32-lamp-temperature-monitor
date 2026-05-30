#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/projdefs.h"
#include "freertos/task.h"
#include "dht.h"

#define DHT_GPIO GPIO_NUM_4

void app_main(void)
{
	float temperature, humidity;
	
	while (1) {
		if(dht_read_float_data(DHT_TYPE_DHT11, DHT_GPIO, &humidity, &temperature) == ESP_OK){
			printf("Temp: %.1f C\n", temperature);
			printf("hum: %.1f %%\n", humidity);
		}else {
			printf("DHT Read Filed\n");
		}
		vTaskDelay(pdMS_TO_TICKS(2000));
	}
}
