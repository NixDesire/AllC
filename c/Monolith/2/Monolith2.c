/**********
** 課題2 **
**********/

#include <stdio.h>

void ave_var(double data[], double *ave, double *var)
{
    int i;
    
    for(i = 0; i < 10; i++){
        (*ave) += (data[i]);
    }
    (*ave) /= 10;
    
    for(i = 0; i < 10; i++){
        data[i] = ( data[i] - (*ave) ) * ( data[i] - (*ave) );
        (*var) += data[i];
    }
    (*var) /= 10;
}

int main(void)
{
    double data[10] = {0}, ave = 0, var = 0;
    int i;

    puts("平均と分散を求めるために10件の数値を入力して下さい．");

    for (i = 0; i < 10; i++){
        scanf("%lf", &data[i]);
    }
    
    ave_var(data, &ave, &var);
    
    printf("データ件数: 10, 平均: %lf, 分散: %lf.\n", ave, var);
    
    return 0;
}
