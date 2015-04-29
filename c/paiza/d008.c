#include <stdio.h>

int main(void){
	int n=0;	//引数宣言

	scanf("%d", &n);	//読み込み

	if((n % 2) == 0){
		printf("even\n");
	}else if((n % 2) == 1){
		printf("odd\n");
	}

	return 0;
}