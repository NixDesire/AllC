#include <stdio.h>
#include <stdlib.h>

int birthday(int *month, int *day, int *days, char **m_name)
{
  printf("あなたの誕生日を入力してください [月/日] : ");
  scanf("%d/%d", month, day);
  
  if(1 <= *month && *month <= 12){
    if(*(days+(*month-1)) >= *day && *day > 0){
      printf("あなたの誕生日は %s %d.\n", *(m_name + (*month-1)), *day);
      return 0;
    }
  }
  return -1;
}

int constellation(int month, int day, int *days, int term[][4], char **c_name)
{
  int i;
  if(1 <= month && month <= 12){
    if(*(days+(month-1)) >= day && day > 0){
      for(i = 0; i < 12; i++){
        if(term[i][0] == month){
          if(term[i][1] <= day && day <= days[month-1]){
            printf("よって、あなたの星座は「%s」です。\n", *(c_name + i));
            return 0;
          }
        }else if(term[i][2] == month){
          if(1 <= day && day <= term[i][3]){
            printf("よって、あなたの星座は「%s」です。\n", *(c_name + i));
            return 0;
          }
        }
      }
    }
  }
  return -1;
}
  
int main()
{
  char *c_name[12] = {"牡羊座", "牡牛座", "双子座", "蟹座",
                      "獅子座", "乙女座", "天秤座", "蠍座",
                      "射手座", "山羊座", "水瓶座", "うお座"};
  int term[12][4] = {{3, 21, 4, 19}, {4, 20, 5, 20}, {5, 21, 6, 21},
                     {6, 22, 7, 22}, {7, 23, 8, 22}, {8, 23, 9, 22},
                     {9, 23, 10, 23}, {10, 24, 11, 21}, {11, 22, 12, 21},
                     {12, 22, 1, 19}, {1, 20, 2, 18}, {2, 19, 3, 20}};
/* 各月の日数 （うるう年の判定は無視する) */
  int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
/* 各月の英名 */
  char *m_name[12] = {"Jan.", "Feb.", "Mar.", "Apr.", "May.", "Jun.",
                      "Jul.", "Aug.", "Sep.", "Oct.", "Nov.", "Dec."};
  int month=0, day=0;

/* 誕生日を入力して、確認の日付を出力する */
  if(birthday(&month,&day,days,m_name)){
    printf("Error : 入力された月日は正しくありません。\n");
    return -1;
  }
/* 星座を調べて出力する */
    if(constellation(month,day,days,term,c_name)){
    printf("Error : strange data was entered.constellation\n");
    return -1;
  }
  return 0;
}
