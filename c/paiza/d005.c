#include <stdio.h>

int main(void){
	int fir=0; //初項
	int dif=0; //差の数
	int i; //ループ用
	
	scanf("%d %d", &fir, &dif); //読み込み

	for(i = 0; i < 9; i++){ //10回ループ
		printf("%d ", fir);	//表示
		fir += dif; //差を加算
	}

	printf("%d\n", fir);	//表示仕切った後の改行
	return 0;
}