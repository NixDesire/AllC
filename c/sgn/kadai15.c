#include <stdio.h>
#ifndef N
#define N 3
#endif

void print_result(float a[N][N], float x[N], float y[N])
{
  int i,j;

  for(i=0; i<N; i++){
    if(i==0)        printf("/ ");
    else if(i==N-1) printf("\\ ");
    else            printf("| ");
    for(j=0; j<N; j++)
      printf("%5.2f ",a[i][j]);
    if(i==0)        printf("\\ / ");
    else if(i==N-1) printf("/ \\ ");
    else            printf("| | ");
    printf("%5.2f ",x[i]);
    if(i==0)        printf("\\   / ");
    else if(i==N-1) printf("/   \\ ");
    else if(i==N/2) printf("| = | ");
    else            printf("|   | ");
    printf("%5.2f ",y[i]);
    if(i==0)        printf("\\\n");
    else if(i==N-1) printf("/\n");
    else            printf("|\n");
  }
}
