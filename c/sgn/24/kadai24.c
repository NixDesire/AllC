/* timetable.c */
#include <stdio.h>
#include "timetable.h"

/* 時刻表　と　現時刻　をわたす */
void schedule(struct time *p, struct time *current)
{
  /* この関数中で必要な変数宣言をする */
  int count = 1;
  int boxt = 0;
  int boxm = 0;

  printf("Departure Waiting time\n");

  while(count != 4){   /* 時刻表の各電車について、以下を繰り返す */
    if(current->hour == p->hour){
      if(current->min <= p->min){
        boxm = p->min - current->min;
        printf("%d) %2d:%02d %3d [min.] %s\n",
          count, p->hour, p->min, boxm, p->info);
        count++;
      }
    }else if(current->hour < p->hour){
      boxt = p->hour - current->hour;   /* 発時刻までの時間（分）を計算して、出力する */
      boxm = p->min - current->min + (60 * boxt);
      printf("%d) %2d:%02d %3d [min.] %s\n",
        count, p->hour, p->min, boxm, p->info);
      count++;
    }
    else if(p->hour == -1){
      break;
    }
    p++;
  }
}

int main(void)
{
  struct time table[] = { /* 時刻表 (時刻順に並んでいる）*/
   {6,20,""},{6,49,""},
   {7,12,"Hizume (On Sat. and holidays, for Morioka)"},{7,29,""},
   {7,34,"Kitakami"},{7,43,""},{7,50,"Ichinoseki"},
   {8,0,""},{8,34,""},{8,45,""},     {9,2,""},{9,17,""},{9,42,""},
   {10,0,""},{10,42,""},             {11,23,""},{11,43,""},
   {12,7,""},{12,44,""},             {13,25,""},{13,41,""},
   {14,12,""},{14,32,""},            {15,6,""},{15,39,""},
   {16,25,""},{16,38,""},            {17,0,""},{17,41,""},
   {18,21,""},{18,35,""},{18,52,""}, {19,15,""},{19,50,""},
   {20,10,""},{20,31,""},            {21,3,""},{21,26,""},
   {22,8,""},{22,27,""},
   {-1,-1,""}              /* センチネル */
  };
  struct time current; /* 時刻入力用 */

  printf("Enter current time [hh:mm] : ");
  scanf("%d:%d", &current.hour, &current.min);  /* 現時刻を入力する */

  schedule(table, &current);  /* 現時刻以後3本の電車情報を出力する */

  return 0;
}
