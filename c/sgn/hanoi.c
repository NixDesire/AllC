#include <stdio.h>

void Hanoi(int n, int start, int rem, int goal)	//ハノイ関数
{
    if(n>=1){
        Hanoi(n-1, start, goal, rem);
		printf("Move disk %d from pole %d to pole %d\n", n, start, goal);
		Hanoi(n-1, rem, start, goal);
	}
}
