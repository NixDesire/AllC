#include <stdio.h>

int main(void){
	int a=0, b=0;	//入力された値を保存する変数
	
	scanf("%d %d", &a, &b); //aとbの読み込み

	if(a > b){	//aの方が大きければaを表示
		printf("%d\n", a);
	}else if(b > a){	//bの方が大きければbを表示
		printf("%d\n", b);
	}else{	//同じであればeqを表示
		printf("eq\n");
	}	
		
	return 0;
}