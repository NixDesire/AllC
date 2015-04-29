#include <stdio.h>
#include <ctype.h>        /* tolower(  ) で必要 */
#include <stdlib.h>       /* exit(  ) で必要 */

  /* 16 進文字列を 10 進数に変換する */
unsigned long ToDec(char argv[])
{
    short i = 0;        /* 配列の添字として使用 */
    short n;
    unsigned long x = 0;
    char c;

    while (argv[i] != '\0') {        /* 文字列の末尾でなければ */

            /* '0' から '9' の文字なら */
        if ('0' <= argv[i] && argv[i] <= '9')
            n = argv[i] - '0';        /* 数字に変換 */

            /* 'a' から 'f' の文字なら */
        else if ('a' <= (c = tolower(argv[i])) && c <= 'f')
            n = c - 'a' + 10;        /* 数字に変換 */

        else {        /* それ以外の文字なら */
            exit(0);        /* プログラムを終了させる */
        }
        i++;        /* 次の文字を指す */

        x = x *16 + n;    /* 桁上がり */
    }
    return (x);
}

int main(int argc, char *argv[])
{
    int i;            /* 変換する１６進文字列（１６進文字列です） */
    int box=0;
    //char str[4][9] = {"BED", "CAFE", "BADFACE","DEADBEE"};

    for(i = 1; i < argc; i++){
        //printf("%s = %lu\n", argv[i], ToDec(argv[i]));
        box += ToDec(argv[i]);
    }
    printf("%x(%d)\n", box, box);
    return 0;
}