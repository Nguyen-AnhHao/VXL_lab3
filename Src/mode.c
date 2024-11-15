/*
 * mode.c
 *
 *  Created on: Oct 28, 2024
 *      Author: hao
 */

#include "mode.h"

void fsm_mode()
{
	switch (mode)
	{
	case 1:
		fsm_automatic_run();
		if (check_button_flag(0))
		{
			mode = 2;
			tmp = redDuration;
			counter1 = redDuration;
			counter2 = mode;
			setColor1(AUTO_RED);
			setTimer1(2000);
			setTimer3(200);
		}
		break;
	case 2:
	    if (timer1_flag == 1) {
	        blinkLed1(AUTO_RED);       // Nhấp nháy đèn đỏ
	        setTimer1(500);
	    }
	    if (check_button_flag(0)) {    // Kiểm tra nếu nhấn Button 1 lần nữa
	        mode = 3;
	        tmp = yellowDuration;
	        setColor1(AUTO_YELLOW);    // Chuyển sang chế độ chỉnh sửa đèn vàng
	        setTimer1(2000);
	    }
	    if (is_button_pressed_1s(1)) {
	        if (timer3_flag == 1) {
	            tmp = (tmp >= 99) ? 1 : tmp + 1; // Tăng thời gian đèn đỏ
	            setTimer3(200);
	        }
	    } else if (check_button_flag(1)) {
	        tmp = (tmp >= 99) ? 1 : tmp + 1;     // Tăng thời gian khi nhấn Button 2
	    }
	    if (check_button_flag(2)) {
	        redDuration = tmp;                   // Lưu thời gian mới cho đèn đỏ
	        // Điều chỉnh yellowDuration và greenDuration
	        if (redDuration > (yellowDuration + greenDuration)) {
	            greenDuration = redDuration - yellowDuration;
	        } else if (redDuration < (yellowDuration + greenDuration)) {
	            yellowDuration = redDuration / 2;
	            greenDuration = redDuration / 2;
	            if (redDuration % 2 != 0) {
	                greenDuration++; // Điều chỉnh để tổng yellow và green khớp với red
	            }
	        }
	    }
	    break;

	case 3:
		if (is_button_pressed_1s(0))
		{
			if (timer1_flag == 1)
			{
				setColor1(AUTO_GREEN);
				mode = 4;
				tmp = greenDuration;
				setTimer1(500);
			}
		}
		else
		{
			if (timer1_flag == 1)
			{
				blinkLed1(AUTO_YELLOW);
				setTimer1(2000);
			}
			if (check_button_flag(0))
			{
				counter1 = greenDuration;
				counter2 = mode;
				mode = 4;
				tmp = greenDuration;
				setColor1(AUTO_GREEN);
				setTimer1(2000);
			}
		}
		if (is_button_pressed_1s(1))
		{
			if (timer3_flag == 1)
			{
				if (tmp > 99)
				{
					tmp = 1;
				}
				else
				{
					tmp++;
				}
				setTimer3(200);
			}
		}
		else
		{
			if (check_button_flag(1))
			{
				if (tmp > 99)
				{
					tmp = 1;
				}
				else
				{
					tmp++;
				}
			}
		}
		if (check_button_flag(2))
		{
			yellowDuration = tmp;
			if (redDuration != yellowDuration + greenDuration)
			{
				redDuration = yellowDuration + greenDuration;
				if (redDuration > 99)
				{
					redDuration = 99;
					greenDuration = redDuration - yellowDuration;
				}
			}
		}
		break;
	case 4:
		if (is_button_pressed_1s(0))
		{
			if (timer1_flag == 1)
			{
				setColor1(AUTO_RED);
				mode = 2;
				tmp = redDuration;
				setTimer1(500);
			}
		}
		else
		{
			if (timer1_flag == 1)
			{
				blinkLed1(AUTO_GREEN);
				setTimer1(2000);
			}
			if (check_button_flag(0))
			{
				counter1 = redDuration;
				counter2 = mode;
				mode = 1;
				tmp = redDuration;
				setColor1(INIT);
				status = INIT;
			}
		}
		if (is_button_pressed_1s(1))
		{
			if (timer3_flag == 1)
			{
				if (tmp > 99)
				{
					tmp = 1;
				}
				else
				{
					tmp++;
				}
				setTimer3(200);
			}
		}
		else
		{
			if (check_button_flag(1))
			{
				if (tmp > 99)
				{
					tmp = 1;
				}
				else
				{
					tmp++;
				}
			}
			if (check_button_flag(2))
			{
				greenDuration = tmp;
				if (redDuration != yellowDuration + greenDuration)
				{
					redDuration = yellowDuration + greenDuration;
					if (redDuration > 99)
					{
						redDuration = 99;
						yellowDuration = redDuration - greenDuration;
					}
				}
			}
		}
		break;
	default:
		break;
	}
}
