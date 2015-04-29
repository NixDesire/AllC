#include <stdio.h>

//2つのint型整数の値を交換
void int_swap(int *ptr1, int *ptr2)
{
	int tmp;

	tmp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = tmp; 
}

int main(void)
{
	int a, b;

	printf("a?: ");
	scanf("%d", &a);
	printf("b?: ");
	scanf("%d", &b);

	printf("a = %d, b = %d\n", a, b);
	int_swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}
