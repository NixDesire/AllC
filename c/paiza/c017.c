#include <stdio.h>

int main(void){
	int a=0, b=0;
	int n=0;
	int i=0;
	int boxa[40]={0};
	int boxb[40]={0};

	scanf("%d %d", &a, &b);
	scanf("%d", &n);

	for(i=0; i < n; i++){
		scanf("%d %d", &boxa[i], &boxb[i]);
	}

	for(i=0; i < n; i++){
		if(a > boxa[i]){
			printf("High\n");
		}else if(a < boxa[i]){
			printf("Low\n");
		}else if(a == boxa[i]){
			if(b > boxb[i]){
				printf("Low\n");
			}else if(b < boxb[i]){
				printf("High\n");
			}
		}
	}

	return 0;
}