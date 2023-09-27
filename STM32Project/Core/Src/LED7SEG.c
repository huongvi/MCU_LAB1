/*
 * LED7SEG.c
 *
 *  Created on: Sep 27, 2023
 *      Author: Admin
 */

#include "LED7SEG.h"

void display7SEG_1(int count){
	switch (count){
	case 0:
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 0);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 0);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 0);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 1);
		break;
	case 1:
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 1);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 1);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 1);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 1);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 1);
		break;
	case 2:
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 1);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 0);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 0);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 1);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 0);
		break;
	case 3:
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 0);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 1);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 1);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 0);
		break;
	case 4:
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 1);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 1);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 1);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 0);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 0);
		break;
	case 5:
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 1);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 0);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 1);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 0);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 0);
		break;
	case 6:
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 1);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 0);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 0);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 0);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 0);
		break;
	case 7:
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 1);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 1);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 1);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 1);
		break;
	case 8:
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 0);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 0);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 0);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 0);
		break;
	case 9:
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 0);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 0);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 0);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 0);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 1);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 0);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 0);
		break;
	default:
		HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, 1);
		HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, 1);
		HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, 1);
		HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, 1);
		HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, 1);
		HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, 1);
		HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, 1);
	}

}

void display7SEG_2(int count){
	switch (count){
	case 0:
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 0);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 0);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 0);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 1);
		break;
	case 1:
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 1);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 1);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 1);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 1);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 1);
		break;
	case 2:
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 1);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 0);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 0);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 1);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 0);
		break;
	case 3:
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 0);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 1);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 1);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 0);
		break;
	case 4:
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 1);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 1);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 1);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 0);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 0);
		break;
	case 5:
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 1);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 0);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 1);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 0);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 0);
		break;
	case 6:
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 1);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 0);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 0);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 0);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 0);
		break;
	case 7:
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 1);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 1);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 1);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 1);
		break;
	case 8:
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 0);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 0);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 0);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 0);
		break;
	case 9:
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 0);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 0);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 0);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 0);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 1);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 0);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 0);
		break;
	default:
		HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, 1);
		HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, 1);
		HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, 1);
		HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, 1);
		HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, 1);
		HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, 1);
		HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, 1);
	}

}



