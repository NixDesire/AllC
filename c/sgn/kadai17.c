#include <stdio.h>

void ave_var(int n, double *data, double *ave, double *var)
{
  for(i=0; i<10; i++){
    scanf("%f", &n[i]);
    m = m+n[i];
  }
  m = m/10;
  
  for(i=0; i<10; i++){
    n[i] = (n[i]-m) * (n[i]-m);
    v = v+n[i];
  }
  v = v/10;
}

int main(void)
{
  double n[10]={0},m=0,v=0;
  int i;
  
  
  printf("Number of data: 10, Mean: %lf, Variance: %lf.\n", m, v);
  return 0;
}
