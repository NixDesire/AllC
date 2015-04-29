#include <stdio.h>

int main(void)
{
	double c=0, z=0;
	printf("c:=");
	scanf("%lf",&c);
	printf("d:=");
	scanf("%lf",&z);

	printf("fp: %.4f + %.4f = %.4f\n", c, z, c+z);
	printf("    %.4f - %.4f = %.4f\n", c, z, c-z);
	printf("    %.4f * %.4f = %.4f\n", c, z, c*z);
	if(c % z == 0)
		printf("divided by zero.\n");
	else{
		printf("    %.4f / %.4f = %.4f\n", c, z, c/z);
	}
	printf("ep: %.4e + %.4e = %.4e\n", c, z, c+z);
	printf("    %.4e - %.4e = %.4e\n", c, z, c-z);
	printf("    %.4e * %.4e = %.4e\n", c, z, c*z);
	if(c % z == 0)
		printf("divided by zero.\n");

	else{
		printf("    %.4e / %.4e = %.4e\n", c, z, c/z);
	}
	return 0;
}
