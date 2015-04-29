#include <stdio.h>			//入出力用
#include <stdlib.h>
#include <math.h>			//数学ライブラリ						

int main(void)
{
	double x, y, rx, box;		//引数宣言
	scanf("%lf", &x);			//倍精度浮動小数点数でxを読み込み
	if(x < 0) return 1;
	
	scanf("%lf", &y);			//倍精度浮動小数点数でyを読み込み	
	if(y == 0) return 1;
	rx = sqrt(x);				//√xに変換(いらない可能性)
	box = pow(y,2.0) - x;		//あまりの辺の長さ(非累乗)
	box = sqrt(abs(box));		//絶対値の平方根で本来の長さに変換
	printf("%.12lf\n", box/y);  //sin(θ)	
	printf("%.12lf\n", 2 * rx/y * box/y); 			//sin(2θ)
	printf("%.12lf\n", pow(rx/y,2) - pow(box/y,2)); //cos(2θ)
	return 0;
}
