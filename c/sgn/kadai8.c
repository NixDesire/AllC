#include <stdio.h>
int main(void)
{
	double c=0, m=0;
	c = 2.99792458e+8;
	scanf("%lf",&m);
	printf("E=%.14e\n", m*c*c);
	return 0;
}
