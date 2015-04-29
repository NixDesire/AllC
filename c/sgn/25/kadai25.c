#include <stdio.h>
#include <stdlib.h>
#include "timetable2.h"

/* current直後の電車を探して、その時刻表を指すポインタを返す */
struct time *schedule(struct time *p, struct time *current)
{
  if(0 <= current->hour && current->hour<24 && 0 <= current->min && current->min < 60){
    while(p->hour != -1){   /* 時刻表の各電車について、以下を繰り返す */
      if(current->hour == p->hour){
        if(current->min <= p->min && current->min < 60){
          return p;
        }
      }else if(current->hour < p->hour){
        return p;
      }
      p++;
    }
    return p;
  }
  else exit(1);
}

int main(void)
{
   struct time table[] = {
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
   int i=1;
 /* ここで必要な変数を定義する */
   struct time *p;
   struct time current; 
   int boxm, boxt;

   printf("Enter current time [hh:mm] : ");
 
   scanf("%d:%d", &current.hour, &current.min);
 
   p = schedule(table, &current); /* current直後の電車を指すポインタが返る */

   printf("Departure Waiting time\n");
 
   /* 3件分繰り返す(3件無いかもしれない) */
    for(i = 1; i <= 3; i++){
      if(p->hour == -1) return 0;
      
      boxt = p->hour - current.hour;   /* 発時刻までの時間（時）を計算してboxtに格納*/
      boxm = p->min - current.min + (60 * boxt); //発射国までの時間(分)を計算してboxmに格納
      
      printf("%d) %2d:%02d %3d [min.] %s\n",
        i, p->hour, p->min, boxm, p->info);
      
      p++; //次の時刻表へ
    }
   
   return 0;
}
