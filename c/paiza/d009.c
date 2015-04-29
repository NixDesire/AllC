#include <stdio.h>

int main(void){
	int a=0, b=0;	//引数宣言

	scanf("%d %d", &a, &b);	//読み込み

	printf("%d\n", b-a);	//表示

	return 0;
}