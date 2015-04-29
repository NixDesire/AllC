#include <stdio.h>
#include <ctype.h>
#include <string.h>

#ifndef INITS
#define INITS "Apple"
#endif

int main(void)
{
	int i=0;
	char moji[]=INITS;
	char *s = INITS;
	int len;
	len = strlen(s);

	printf("String: %s\n", moji);
	for(i=0; i<len; i++){
		moji[i] = toupper(moji[i]);
 	}
	printf("Upper case: %s\n", moji);
	return 0; 
}
