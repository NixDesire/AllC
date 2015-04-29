#include <stdio.h>

char *itoa(long int num, char *moji)			//itoa関数
{
	int i=0, tmp=0, count=0, boxi[80]={0};	//引数宣言
	char boxc[]="0123456789";

	if(num < 0){
		*moji = '-';
		moji++;
		num *= -1;
	}else if(num == 0){
		*moji = '0';
		moji++;
	}

	while(num > 0){						//numが0より大きいなら続ける
		boxi[count] = num % 10;			//moji配列に各桁を代入
		num = num/10;					//numを10で割る
		count++;
	}

	for(i = 0; i < count/2; i++){		//配列総入れ替え
		tmp = boxi[i];
		boxi[i] = boxi[count-i-1];
		boxi[count-i-1] = tmp;				
	}

	tmp = 0;

	for(i=0; i < count; i++){
		tmp = boxi[i];
		*(moji+i) = boxc[tmp];
	}
	return 0;
}

int main(void)							//メイン部
{
	char moji[80]={0};
	int num;

	printf("integer : ");				//整数打て
	scanf("%d", &num);					//num標準入力
	itoa(num, moji);					//itoaに関数受け渡し
	printf("%s\n", moji);				//結果表示用
	return 0;
}
