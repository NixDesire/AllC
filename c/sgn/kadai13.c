#include <stdio.h>
#ifndef M
#define M 1
#endif

int ack(int m, int n)
{
	if(m == 0) return n + 1;
	else if(n == 0) return ack(m - 1, 1);
	else return ack(m - 1, ack(m, n - 1));
}

int ans(int max)
{
	int i;
	int sum=0;
	for(i = 1; max >= sum; i++){
		sum += ack(M, i);
	}
	return i - 1;
}

int main(void)
{
	int max;
	scanf("%d", &max);
	printf("%d\n", ans(max));
	return 0;
}
