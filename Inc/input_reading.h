/*
 * input_reading.h
 *
 *  Created on: Oct 28, 2024
 *      Author: hao
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

#include "main.h"
#include "software_timer.h"
#include "global.h"

void button_reading(void);
unsigned char is_button_pressed(unsigned char index);
unsigned char is_button_pressed_1s(unsigned char index);

#endif /* INC_INPUT_READING_H_ */
