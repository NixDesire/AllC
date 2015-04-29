#include <stdio.h>
#include <math.h>

double triangle_edge(double a, double b);
void theta2rad(double angle, double *ra, double *sine, double *cosine);

double triangle_edge(double a, double b)	
{
	double box=0;	//cの長さを格納する変数

	box = sqrt((pow(a,2) + pow(b,2)));	//余弦定理実行5
	
	return box;	//boxを返す
}

void theta2rad(double angle, double *ra, double *sine, double *cosine)	//角度を受け取る
{
	*ra = angle * M_PI / 180.0;
	*sine = sin(*ra);
	*cosine = cos(*ra);
}

int main(void)
//第一引数に角度、第2引数から第4引数で、それぞれラジアン値、sin値cos値を返す
{
	double a=0, b=0; //辺の長さ

	double angle=0; //角度

	double ra=0, sine=0, cosine=0;  //ラジアン、sin、cosの順番で引数を用意

	scanf("%lf %lf", &a, &b);  //aとbの値を入力

	printf("%lf\n", triangle_edge(a, b));  //の値が帰ってくる、そして表示

	scanf("%lf", &angle);

	theta2rad(angle, &ra, &sine, &cosine);

	printf("ラジアン%lf　sin%lf cos%lf\n", ra, sine, cosine);

	return 0;
}

/*
1.直角三角形の3辺がのaとbをの長さが与えられた時、cの長さを返す関数triangle_edge

2.角度(0~180)が与えられたらこれを変換したラジアン値(0~π)とsin値、cos値を求める関数　theta2rad
*/

