/**********************
*** ファイルヘッダの例 ***
**********************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])  //1がシードで2が試行回数
{
	int i = 0;	//ループ用
	double x=0, y=0, pai=0, trial=0, seed=0, suc=0;

	seed = atof(argv[1]);	//コマンド引数1の文字を倍精度小数点数に変換(シード値)
	trial = atof(argv[2]); 	//コマンド引数2の文字を倍精度小主点数に変換(試行回数)
	
	srand(seed);	//乱数にシード値を与える

	for(i = 0; i <= trial; i++)
	{	//試行回数分ループ
		x = rand()/(RAND_MAX + 1.0);	//xに0.0~1.0の乱数を発生させる
		y = rand()/(RAND_MAX + 1.0);	//yに0.0~1.0の乱数を発生させる

		if((x * x + y * y) < 1.0)
		{
			suc += 1.0;
		}
	}

	pai = suc / trial * 4.0;
	printf("PI after %.0lfth trial is approximatelly %lf.\n", trial, pai);
	
	return 0;
}
