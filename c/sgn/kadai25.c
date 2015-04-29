#include <stdio.h>
#include "timetable2.h"

int main()
{
   struct time table[] = {
     ...
   {-1,-1,""}              /* センチネル */
   };
   int i;
 /* ここで必要な変数を定義する */
   ? p;  
   ?

   printf("Enter current time [hh:mm] : ");
 
   scanf("%d:%d", &current.hour, &current.min);
 
   p = schedule(table, &current); /* current直後の電車を指すポインタが返る */

   printf("Departure Waiting time\n");
 
   /* 3件分繰り返す(3件無いかもしれない) */
   ?
     /* 待ち時間を算出する */ 
      ?
      printf("%d) %2d:%02d %3d [min.] %s\n",i, ?, ?, ?, ?);
   ?
   return 0;
}