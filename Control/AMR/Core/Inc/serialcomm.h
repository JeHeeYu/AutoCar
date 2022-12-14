/*
 * serialcomm.h
 *
 *  Created on: Apr 3, 2022
 *      Author: sees1
 */

#ifndef INC_SERIALCOMM_H_
#define INC_SERIALCOMM_H_

#include "stm32f4xx_hal.h"
#include "main.h"

#define MAX_BUFFER_SIZE    255

typedef struct{
	uint8_t front;
	uint8_t rear;
	uint8_t buffer[MAX_BUFFER_SIZE];
}Serial;

void SerialInit(Serial* args);
void EnQueue(Serial* args, uint8_t data);
uint8_t DeQueue(Serial* args);
uint8_t EmptyQueue(Serial* args);

#endif /* INC_SERIALCOMM_H_ */
