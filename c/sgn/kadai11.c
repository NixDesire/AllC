#include <stdio.h>

#ifndef TAX
#define TAX 0.08
#endif

void include_tax(float *genka)
{
	(*genka) = (*genka) + ((*genka) * TAX);
}

int main(void)
{
	float genka;
	printf("※-Dオプションで税率変更もできます\n");
	printf("原価を入力:");
	scanf("%f", &genka);
	include_tax(&genka);
	printf("税込み%.0f円です。\n", genka);
	return 0;
}
