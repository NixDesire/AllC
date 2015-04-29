/**********
** 課題3 **
**********/

#include <stdio.h>
#include <math.h>
#include "mono.h"

#define pi 3.14159  //指定の円周率

double vol(double a)  //体積計算関数
{
	double cap = 0.0;

	cap = (pi * pow(a/2, 3) * 4/3);

	return cap;
}
