#include <stdio.h>

int Euclid(int First, int Second)
{
	if(Second == 0)
		return First;
	else
		return Euclid(Second, First%Second);
}

int main(void)
{
	int First, Second;
	printf("入力された2数の最大公約数を表示します。\n");
	printf("First=");
	scanf("%d",&First);
	printf("Second=");
	scanf("%d",&Second);
	if(First < Second){
		printf("First > Second にしてください");
			return 0;
	}
	printf("「%d」と「%d」の最大公約数は「%d」です。\n", First, Second,  Euclid(First,Second));
	return 0;
}
