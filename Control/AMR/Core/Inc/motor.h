/*
 * motor.h
 *
 *  Created on: Mar 12, 2022
 *      Author: sees1
 */

#ifndef INC_MOTOR_H_
#define INC_MOTOR_H_

#include "main.h"
#include "common.h"

void MotorCotnrol(uint8_t data);
void Straight();
void Stop();
void Right();
void Left();
void UpperLeft();
void UpperRight();
void MotorOn(GPIO_TypeDef*, uint16_t pinA, uint16_t pinB);
void MotorOff(GPIO_TypeDef*, uint16_t pinA, uint16_t pinB);

#endif /* INC_MOTOR_H_ */
