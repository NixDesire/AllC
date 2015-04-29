/**********
** 課題4 **
**********/

//1に対して2,5,6,2,3の順に乗算していくプログラム

#include <stdio.h>

#define RUN_END 99

int main(void){
	int num = 0;
	int ans = 1;

	printf("ans ");

	while(num != RUN_END){
		switch (num){
		case 0:
		case 3:
			ans *= 2;
			num++;
			break;
		case 1:
			ans *= 5;
			num++;
			break;
		case 2:
			ans *= 6;
			num++;
			break;
		case 4:
			ans *= 3;
			num = RUN_END;
			break;
		default:
			printf("error\n");
			num = RUN_END;
			break;
		}

		printf("= %d\n", ans);
	}

	return 0;
} 
