/* 単語数の上限 */
#define MAXWORDS 100
/* 単語の長さの上限 */
#define MAXLEN 80

/* 単語登録用構造体 
    文字列は、領域へのポインタだけで、
    実際の文字列領域は別途用意する必要がある
*/
struct word {
  char *dat;
  int n;      /* 出現回数 */
};

/* プロトタイプ宣言 */
int readword(FILE *fp, char *word);
void registword(char *word, struct word **words, int *count);