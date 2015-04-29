#include <stdio.h>
#include <stdlib.h>

int birthday(int *month, int *day, int *days, char **m_name)
{
  int tsuki, hi;
  printf("Enter your birthday [mm/dd] : ");
  scanf("%d/%d", month, day);
  tsuki = *month;
  hi = *day;
  if(1 <= tsuki && tsuki <= 12){
    if(*(days+(tsuki-1)) >= *day && *day > 0){
      printf("Your birthday is %s %d.\n", *(m_name + (*month-1)), *day);
      return 0;
    }return -1;
  }return -1;
  return 0;
}

int constellation(int month, int day, int *days, int term[][4], char **c_name)
{
  int i;
  for(i = 0; i < 12; i++){

  }
}
  

int main()
{
  char *c_name[12] = {"ARIES", "TAURUS", "GEMINI", "CANCER",
                      "LEO", "VIRGO", "LIBRA", "SCORPIO",
                      "SAGITTARIUS", "CAPRICORN", "AQUARIUS", "PISCES"};
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
    printf("Error : strange data was entered.birthday\n");
    return -1;
  }
/* 星座を調べて出力する */
    if(constellation(month,day,days,term,c_name)){
    printf("Error : strange data was entered.constellation\n");
    return -1;
  }
  return 0;
}
