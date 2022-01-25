/*****************************************
File  : clock_config.c
Autor : strefapic.blogspot.com
MCU   : STM32G071KBT6
IDE   : SEGGER Embedded Studio
******************************************/

#include <stm32g071xx.h>

void PIN_MANAGER_Initialize(void) {

/********** PA8 set Out for LED **********************/
GPIOA->MODER &= ~GPIO_MODER_MODE8_1 ;  //MODE8 -> 0b01  LED
}