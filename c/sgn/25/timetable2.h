/* timetable.h */ 
struct time {
  int hour;      /* 時 */
  int min;       /* 分 */
  char *info;    /* 電車情報 */
};
struct time *schedule(struct time *p, struct time *current);
