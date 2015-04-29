#include <stdio.h>

int main(void)
{
	int a=0, b=0, box=0;              			
	int i;      
	
	scanf("%d",&a);
	scanf("%d",&b);
	if(b <= 0)return 0;
	printf("%d / %d = %d", a, b, a/b);
	if(a % b != 0){
		printf(".");
		for(i = 0; i < 20; i++){
			a = a%b * 10;
			box = a / b;
			printf("%d",box);
			if(a%b == 0){
				break;
			}
		}
	}
	printf("\n");
	return 0;
}

