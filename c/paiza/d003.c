#include <stdio.h>

int main(void){
	int n=0, i=0; //引数宣言
	int sum=0;	//加算用

	scanf("%d", &n);	//読み込み

	for(i = 0; i < 8; i++){
		sum += n;
		printf("%d ", sum);
	}

	printf("%d\n", sum + n);
	
	return 0;
}