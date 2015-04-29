#include <stdio.h>

int main(void)
{
	int i;		/*ループカウンタ*/
	int day;	/*元旦からの日数*/
	/*各月の日数を宣言*/
	int month[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	printf("元旦から数えた日数を入力してください:");
	scanf("%d", &day);
	if(day == 0) return 1;
	for(i = 0; i < 12; i++){
		if(day <= month[i]){
			printf("日付は%d/%d.\n", i + 1, day);
			return 0;
		}
	day -= month[i];
}
printf("errer:だめみたいですね\n"); 
return -1;
}
		