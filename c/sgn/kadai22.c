#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int i;
	int boxi=0;
	double boxd=0, boxr=0;
	if(argc > 1){		//コマンド入力されたら施行
		for (i = 1; i < argc; i++){		//入力要素数回ループ
			boxd = atof(argv[i]);		//文字型から整数に変換して入れる
			boxi = boxd;				//整数部だけを格納
			boxr = boxd - boxi;			//小数点以下だけを格納
			
			if(boxr >= 0)				//0以上なら
				printf("%s = %d+%lf\n", argv[i], boxi, boxr);
			
			else if(boxr < 0)			//0より小さかったら
				printf("%s = %d%lf\n", argv[i], boxi, boxr);
		}
	}
	return 0;
}

