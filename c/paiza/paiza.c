#include <stdio.h>

int saikuru(int n, int i){
	if(1 <= n && n <= 100){	//もし与えられたnが1以上100以下なら
		for(i = 0; i < n; i++){ //n回分ループ
			printf("*");	//n個分*を表示
		}
	}else{
		printf("ルールは守ろうな🐝\n");
	}

	return 0;
}

int main(void){
	int n=0, i;	//*の個数とループ用

	printf("1~100の任意の数字を入力して下さい : ");

	scanf("%d", &n); //nの入力

	saikuru(n, i);

	printf("\n");	//*表示後に開業して終了

	return 0;
}