#include <stdio.h>

int main(void){
	char s[100]={};
	int i=0;

	scanf("%s", s);

	while(s[i] != '\0'){
		if(s[i] == 'A'){
			printf("4");
		}else if(s[i] == 'E'){
			printf("3");
		}else if(s[i] == 'G'){
			printf("6");
		}else if(s[i] == 'I'){
			printf("1");
		}else if(s[i] == 'O'){
			printf("0");
		}else if(s[i] == 'S'){
			printf("5");
		}else if(s[i] == 'Z'){
			printf("2");
		}else{
			printf("%c", s[i]);
		}
		i++;
	}

	printf("\n");

	return 0;
}