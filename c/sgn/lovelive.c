#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int readhonoka(FILE *fp, char *word)
{
	char empty[] = " ,.\n";
	char ch;

	//単語の先頭まで読み飛ばす
	for(ch = ' '; strchr(empty, ch) != NULL; ch = getc(fp));

	//ファイル終端ならここで終了
	if(ch == EOF){
		*word = '\0';
		return ch;
	}

	//一文字目をwordに格納
	*word = ch;

	//単語の終端まで文字をwordに読み込む
	while(strchr(empty, ch) == NULL){
		if(ch == EOF) break;
		*word = ch;
		ch = getc(fp);
		word++;
	}

	//終端文字を添えて帰ろうもういいでしょ
	*word = '\0';
	return 0;
	
}

int main(int argc, char **argv)
{
	FILE *fp;	//ファイルストリーム
	char fname[] = "index.txt", *fn = fname, word[80];
	int c;

	//コマンドライン入力でファイル名が与えられたらそれを使う
	if(argc > 1) fn = argv[1];

	//ファイルが開けなかったらその時点でエラーを返して終了
	fp = fopen(fn, "r");
	if(fp == NULL){
		fprintf(stderr, "Cannot open file : %s\n", fn);
		return 1;
	}

	//単語を一つ読み込んでは表示する作業をファイル終端まで繰り返す
	while((c = readhonoka(fp, word)) != EOF){
		printf("%s\n", word);
	}

	//ファイルを閉じて終了
	fclose(fp);
	return 0;
}