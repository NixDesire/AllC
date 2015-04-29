#include <stdio.h>

int main(void)
{
  float n[10]={0},m=0,v=0;
  int i;
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
  
  printf("Number of data: 10, Mean: %f, Variance: %f.\n", m, v);
  return 0;
}
