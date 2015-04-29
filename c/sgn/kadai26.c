#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ファイルから単語を読み込む。単語区切りとして検出した文字を返す */
int readword(FILE *stdin, char *word)
{
/* 必要な変数を定義する */
	char delimiter[] = " \n,.";  /* 単語の区切りになり得る文字 */
	char ch;

/* 単語の先頭まで読み飛ばす */
  for(ch =  ' '; strchr(delimiter, ch) != NULL; ch = getc(stdin));	

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
  	ch = getc(stdin);
  	word++;
  }

/* 終端文字をwordに格納して終了(上で最後に読み込んだ区切り文字を返す） */
  *word = '\0';
  return 0;
}

int main(int argc, char **argv)
{
	FILE *stdin; //ファイルストリーム
	char fname[] = "intro.txt", *fn = fname, word[80];
	int c;

//引数としてファイル名が与えられたら、それを使う
	if(argc > 1) fn = argv[1];

//ファイルが開けなかったらエラーメッセージを表示して終了
	stdin = fopen(fn, "r");
	if(stdin == NULL){
		fprintf(stderr, "Cannot open file : %s\n", fn);
		return 1;
	}

//単語を一つ読み込んでは表示する　をファイル終端まで繰り返す
	while((c = readword(stdin, word)) != EOF){
		printf("%s\n", word);
	}
/* 最後に(ファイル終端の直前に)単語が一つ読み込まれたかもしれない */
  if(*word != '\0')
    printf("%s\n" ,word);

/* ファイルを閉じて終了 */
  fclose(stdin);
  return 0;
}


