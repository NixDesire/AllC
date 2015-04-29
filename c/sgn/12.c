#include <stdio.h>			//入出力用
#include <math.h>			//数学ライブラリ						

int main(void)
{
	double x, y;		//引数宣言
	scanf("%lf", &x);			//倍精度浮動小数点数でxを読み込み
	if(x < 0) return 1;
	
	scanf("%lf", &y);			//倍精度浮動小数点数でyを読み込み	
	if(y == 0) return 1;
	
	printf("%.12lf\n", sin(acos(sqrt(x)/y)));  //sin(θ)	
	printf("%.12lf\n", sin(2*acos(sqrt(x)/y))); 			//sin(2θ)
	printf("%.12lf\n", cos(2*acos(sqrt(x)/y))); //cos(2θ)
	return 0;
}
