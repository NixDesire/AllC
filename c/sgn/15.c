#include <stdio.h>

#ifndef N
#define N 3
#endif

void print_result(float a[N][N], float x[N], float y[N]);

int main(void)
{
	int i, q; 
	float a[N][N]={{0}}, x[N]={0}, y[N]={0};
	
	for(i=0; i<N; i++){
		for(q=0; q<N; q++){
		scanf("%f", &a[i][q]);
		}
	}
	for(i=0; i<N; i++){
		scanf("%f", &x[i]);
	}

	for(i=0; i<N; i++){
		for(q=0; q<N; q++){
		y[i] = y[i] + a[i][q] * x[q];
		}
	}
	print_result(a,x,y); 
	return 0;
}
