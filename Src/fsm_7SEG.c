/*
 * fsm_7SEG.c
 *
 *  Created on: Oct 28, 2024
 *      Author: hao
 */

#include "fsm_7SEG.h"

// int oneSec = 0;

void fsm_7SEG()
{
	switch (mode)
	{
	case 1:
		if (timer2_flag == 1)
		{
			scan7SEG(counter1, counter2);
			setTimer2(500);
		}
		break;
	case 2:
	case 3:
	case 4:
		if (timer2_flag == 1)
		{
			scan7SEG(tmp, mode);
			setTimer2(500);
		}
		break;
	default:
		break;
	}
}
