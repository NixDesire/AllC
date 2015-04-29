/**********
** 課題3 **
**********/

#include <stdio.h>
#include "mono.h"

int main(void){	 //直径入力，体積表示
	double a = 0;
	
	printf("直径[m] = ");
	scanf("%lf", &a);
	printf("直径 %fm の球の体積は %fm^3 である", a, vol(a));
	
	return 0;
}
