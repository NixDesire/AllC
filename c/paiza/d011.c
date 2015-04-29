#include <stdio.h>

int main(void){
	int count = 0;
	char box[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
					'O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	char n;

	scanf("%c", &n);
	while(n != box[count]){
		count++;
	}

	printf("%d\n", count+1);

	return 0;
}