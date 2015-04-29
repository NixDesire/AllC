#include <stdio.h>

int main(void){
	int a=0, b=0, r=0;
	int n=0;
	int x[100]={0};
	int y[100]={0};
	int i=0;

	scanf("%d %d %d", &a, &b, &r);

	scanf("%d", &n);

	for(i=0; i < n; i++){
		scanf("%d %d", &x[i], &y[i]);
	}

	for(i=0; i < n; i++){
		if(  ((x[i] - a) * (x[i] - a) + (y[i] - b)*(y[i] - b) ) >= (r * r)  ){
		printf("silent\n");
	    }else{
	    	printf("noisy\n");
		}
	}

	return 0;
}