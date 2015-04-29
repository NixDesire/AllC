#include <stdio.h>

int main(void)
{
	int n=0, start=0, goal=0, rem=0;	//引数宣言
	
	printf("How many disks? : ");		//ディスク枚数
	scanf("%d", &n);
	
	printf("From where? [1-3] : ");		//出発点
	scanf("%d", &start);
	if(start < 1 || 3 < start) return 0;
	
	printf("To where? [1-3] : ");		//到着点
	scanf("%d", &goal);
	if(goal < 1 || 3 < goal) return 0;
	if(start == goal){					//出発と到着同じ
		printf("出発点と到着点が同じです、終了します。\n");
		return 0;
	}
	rem = 6 - start - goal;
	Hanoi(n, start, rem, goal);			//ハノイ関数呼び出し
    return 0;
}
