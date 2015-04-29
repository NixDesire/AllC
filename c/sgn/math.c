#include  <stdio.h>
#include  <math.h>

void main( void );

void main( void )
{
    double x;

    printf("角度を入力して下さい\t");
    scanf("%lf", &x);

    printf("\ncos(x) * cos(x) + sin(x) * sin(x) = %6.4lf\n",
                                    cos(x) * cos(x) + sin(x) * sin(x));
}
