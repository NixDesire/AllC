#include <stdio.h>
int main(void)
{
    int i,w,max=0,n;
    scanf("%d",&n);
    if(n <= 0)return 0;
    for(i = 0; i < n; i++){
    scanf("%d",&w);
    if(max < w)max = w;
    }
    printf("The maximum value is %d.\n",max);
    return 0;
}
