#include <stdio.h>

void Hanoi(int n,char *from,char *dest,char *work)
{
    if(n>=1){
        Hanoi(n-1,from,dest,work);

        printf("Move disk %d from pole %s to pole %s\n",n,from,dest);

        Hanoi(n-1,work,from,dest);
    }
}

int main(void)
{
	int n=0, from=0, to=0;
	printf("How many disks? : ");
	scanf("%d", &n);
	printf("From where? [1-3] : ");
	scanf("%d", &from);
	printf("To where? [1-3] : ");
	scanf("%d", &to);
    Hanoi(n,"1","2","3");

    return 0;
}
