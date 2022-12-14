/*
 * serialcomm.c
 *
 *  Created on: Apr 3, 2022
 *      Author: sees1
 */

#include "main.h"
#include "serialcomm.h"


void SerialInit(Serial* args)
{
	args->front = 0;
	args->rear = 0;
	memset(args->buffer, 0, sizeof(args->buffer));
}

void EnQueue(Serial* args, uint8_t data)
{
	args->buffer[args->front] = data;

	args->front++;

	if (args->front >= MAX_BUFFER_SIZE) {
		args->front = 0;
	}
}

uint8_t DeQueue(Serial* args)
{
	uint8_t data = args->buffer[args->rear];

	args->rear++;

	if (args->rear >= MAX_BUFFER_SIZE) {
		args->rear = 0;
	}

	return data;
}

uint8_t EmptyQueue(Serial* args)
{
	return args->front == args->rear;
}


