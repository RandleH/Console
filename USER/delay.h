#include "headfile.h"
#ifndef __DELAY_H
#define __DELAY_H 			   

void delay_init(u8 SYSCLK);
void delay_ms(u16 nms);
void delay_us(u32 nus);
#endif
