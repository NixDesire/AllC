/* 必要なヘッダファイルを入れる */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

void registword(char *word, struct word **words, int *count);

/* ファイルから単語を読み込む。単語区切りとして検出した文字を返す */
int readword(FILE *fp, char *word)
{
/* 必要な変数を定義する */
  char delimiter[] = " \n,.";  /* 単語の区切りになり得る文字 */
  char ch;

/* 単語の先頭まで読み飛ばす */
  for(ch =  ' '; strchr(delimiter, ch) != NULL; ch = getc(fp)); //

/* ファイルの終端だったら、ここでおしまい */
  if(ch == EOF){
    *word = '\0';
    return ch;
  } 

/* 1文字めをwordに格納して */
  *word = ch;

/* 単語の終端まで文字をwordに読み込む */
  //for(ch = getc(fp), word++; strchr(delimiter, ch) == NULL; ch = getc(fp), word++){
  while(strchr(delimiter, ch) == NULL){
    if(ch == EOF) break;
    *word = ch;
    ch = getc(fp);
    word++;
  }

/* 終端文字をwordに格納して終了(上で最後に読み込んだ区切り文字を返す） */
  *word = '\0';
  return 0;
}

/* 単語wordをwordsに登録する
   既出単語であれば、出現回数を更新する
 　新規単語であれば、登録単語数countを更新する
*/
void registword(char *word, struct word **words, int *count)
{
/* 変数宣言する */
int length = 0; //単語長計測用変数
int i; //構造体配列比較用
/* 単語長を調べる */
length = strlen(word);
printf("%d\n", length);
/* 単語長が0だったら登録しないで終了 */
if(length == 0){
  return;
}
/* すでに登録されている全ての単語と比較する
   (注意： 文字列どうしは '==' では比較できません。)
  もし等しい単語が登録されていたら、出現回数を更新して終了する
*/
for(i = 0; i < (*count)-1; i++, (words)++){
  if(strcmp((*words)->dat, word) == 0){
    ((*words)->n)++;
    return;
  }
}

/* 登録されていなかったら */
/* 単語の登録領域を 確保する
      構造体１つ
　　　文字配列（長さに注意する）
*/
*words = (struct word*)malloc(sizeof(struct word));
(*words)->dat = (char *)malloc(sizeof(char) * length); 
/* 単語を登録（上で確保した領域にコピー）する
    （注意：文字列のコピーは単純な代入 '=' ではできません。）
   1回目の出現なので出現回数は ... 
*/
strcpy((*words)->dat, word);
(*words)->n += 1;

//登録単語数を更新する
   count++;
}


int main(void)
{
  struct word *words[MAXWORDS];  /* 単語登録用ポインタ配列「100」 */
  int count = 0;                 /* 登録単語数 */
  char word[MAXLEN+1];           /* 単語読み込み用文字列 「80+1」*/
  int length, i, c;
  FILE *fp = NULL;

/* 1単語づつ読み込み登録する  
　　　読み込みは問題26と同様　
　　　登録は registword による */
while((c = readword(fp, word)) != EOF){
  registword(word, *words, &count);
}

/* 登録した単語を表示する */
  for (i = 0; i < count; i++)
    printf("   %d %s\n", words[i]->n, words[i]->dat);

/* 確保した領域を開放する */
  for (i = 0; i < count; i++){
    free((void *)words[i]->dat);
    free((void *)words[i]);
  }

  fclose(fp);
  return 0;
}