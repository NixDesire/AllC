#include <stdio.h>

int main(void)
{
	int a, b, box=0 i;              			      
	
	scanf("%d", &a);
	scanf("%d", &b);
	if(b <= 0) return 0;
	printf("%d / %d = %d", a, b, a/b);
	while(a%b != 0){
		a = a%b * 10;
		box = a / b;
		
	}
	printf("\n");
	return 0;
}

