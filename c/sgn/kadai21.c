#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	short i = 1;        /* 配列の添字として使用 */
	short q = 0;
    short n;
    unsigned long x = 0;
    char c;
/* argv[]の中には16進数文字列が入ってる */
	for(q = 0; q < argc; q++){
        while (*argv[i][] != '\0') {        /* 文字列の末尾でなければ */

            /* '0' から '9' の文字なら */
            if ('0' <= *argv[i] && *argv[i] <= '9')
                n = *argv[i] - '0';        /* 数字に変換 */

            /* 'a' から 'f' の文字なら */
            else if ('a' <= (c = tolower(*argv[i])) && c <= 'f')
                n = c - 'a' + 10;        /* 数字に変換 */

            else {        /* それ以外の文字なら */
                printf("無効な文字です。\n");
                exit(0);        /* プログラムを終了させる */
            }
        i++;        /* 次の文字を指す */

        x = x * 16 + n;    /* 桁上がり */
        }
    }
	for(i=1; i < argc; i++){
		printf("%x %s\n", i, argv[i]);
	}

	return 0;
}


/*
Nix:c Nix$ cc kadai21.c
Nix:c Nix$ ./a.out 1 10 1a
配列に「1」「10」「1a」が格納されている
(詳しくは./a.outも0番目に格納されているが計算時に必要ない)
1 10 1a
1 16 26



1+16+26=43(2b)
*/