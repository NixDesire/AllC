#include <stdio.h>

int birthday(int *month, int *day, int *days, char **m_name)
{
  printf("Enter your birthday [mm/dd] : ");
  scanf("%d/%d", month, day);
  
  if(1 <= *month && *month <= 12){    //月が1月から12月の間だったら
    if(*(days+(*month-1)) >= *day && *day >= 1){   //日付が1以上かつその月の日数以下だったら
      printf("Your birthday is %s %d.\n", *(m_name + (*month-1)), *day);
      return 0;
    }
  }
  return -1;
}

int constellation(int month, int day, int *days, int term[][4], char **c_name)
{
  int i;
  
  if(1 <= month && month <= 12 && *(days+(month-1)) >= day && day > 0){    //月が1月から12月の間だったら
    for(i = 0; i < 12; i++){    //月は12月あるので12回ループ
      if(term[i][0] == month && term[i][1] <= day && day <= days[month-1]){    //月が星座の開始月と同じだったら
        printf("Therefore, your constellation is the %s.\n", *(c_name + i));    
        return 0;
      
      }else if(term[i][2] == month){    //月が星座の終了月と同じだったら
        if(1 <= day && day <= term[i][3]){    //1以上かつ星座の終了日以下だったら
          printf("Therefore, your constellation is the %s.\n", *(c_name + i));
          return 0;
        }
      }
    }
  }
  return -1;
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
    printf("Error : strange data was entered.\n");
    return -1;
  }
/* 星座を調べて出力する */
  if(constellation(month,day,days,term,c_name)){
    printf("Error : strange data was entered.\n");
    return -1;
  }
  return 0;
}

/*
 *課題19、20
 *標準入力から日付を入力し、英語の月と星座を表示するプログラム
 *考え方としては月の方は1月から12月かまでを判定し
 *日付が1以上かつ、その月の日数以下だったら表示するプログラム
 *関数がifの中にあるので、異常だったら-1を返すとエラー、
 *正常だったら0を返すことで正常終了(if文の中だけ)  

 *星座は最初に日付が正しいか判定をし、
 *星座の範囲を2分割
 *・開始日から月末
 *・月頭から終了日
 *で構成する。
 *
 *12月なので12回ループさせて上記の2分割した条件を満たした時
 *星座を表示し0を返す
 *異常時は同じく-1を返す。
*/
