#include <stdio.h>

int main(void){
	char s[80]={0};
	char t[80]={0};

	scanf("%s", s);
	scanf("%s", t);

	printf("%s@%s\n", s, t);

	return 0;
}