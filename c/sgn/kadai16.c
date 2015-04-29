#include <stdio.h>
#include <stdlib.h>
#ifndef INITS
#define INITS "Apple"
#endif

char henkan(char moji)
{
	if(('a' <= moji) && (moji <= 'z'))
		return moji - 0x20;
	else return moji;
}

int main(void)
{
	int i=0;
	char moji[]=INITS;
	
	printf("String: ");
	while(moji[i] != '\0'){
		scanf("%c", &moji[i]);
		moji[i] = henkan(moji[i]); 
		i++;
	}
	printf("Upper case: %s\n", moji);
	return 0; 
}
