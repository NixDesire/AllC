#include <stdio.h>
#include <string.h>

int main(void){
	char n[1];
	int m=0;
	char r[80][1000]={};
	int i=0;
	int count=0;

	scanf("%s", n);
	scanf("%d", &m);

	for(i=0; i<m; i++){
		scanf("%s", r[i]);
	}

	for(i=0; i<m; i++){
		if(strstr(r[i], n) == NULL){
			printf("%s\n", r[i]);
			count++;
		}
	}

	if(count == 0){
		printf("none\n");
	}

	return 0;
}