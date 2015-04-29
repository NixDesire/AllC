#include <stdio.h>

int kaijou(int c)
{
	if(c > 0){
		printf("%d +", c);
		return c + kaijou(c - 1);
		
	}
	else if (c == 0)
		return 1;
}

	
int main()
{
	int s;/*階乗入力用*/
	printf("What is Number:");
	scanf("%d",&s);/*階乗入力*/

	printf("%d! = %d\n", s, kaijou(s)-1);
	return 0;
}
