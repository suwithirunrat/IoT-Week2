#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>
#include "LED.h" //เรียกใช้ component ที่สร้างไว้
#include "driver/gpio.h"

#define pin 23 //ตั้งค่า pin เป็นขาที่ 23

void app_main(void) {
	gpio_reset_pin(pin); //รีเซ็ต pin
	gpio_set_direction(pin, GPIO_MODE_OUTPUT); //เซ็ต pin เป็น output

	while (1) // ทำ loop โดยตั้งลูปเป็น 1
	{
		LEDON(pin); //LEDON เปิดไฟ
		sleep(1); //ตั้งหน่วงเวลา 1 วิ
		LEDOFF(pin); //LEDOFF ปิดไฟ
		sleep(1);
	}
}
