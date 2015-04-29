#include <stdio.h>
#include "complex.h"

//typedef struct complex complex;
complex add_complex(complex x, complex y);
complex multiply_complex(complex x, complex y);

  /* 二つの複素数の和を返す */
complex add_complex(complex x, complex y)
{
    complex z;

    z.real = x.real + y.real;                   /* 実数部分の和 */
    z.imaginary = x.imaginary + y.imaginary;    /* 虚数部分の和 */

    return z;
}

  /* 二つの複素数の積を返す */
complex multiply_complex(complex x, complex y)
{
    complex z;

    z.real = (x.real * y.real) - (x.imaginary * y.imaginary);
    z.imaginary = (x.real * y.imaginary) + (y.real * x.imaginary);

    return z;
}

  /* 複素数をコンソールに表示 */
void ShowComplex(char varname[ ], complex x)
{
    printf("%s = %3.1lf + %3.1lfi\n", varname, x.real, x.imaginary);
}

int main(void)
{
    complex x, y, z, z2;

    /* 二つの複素数に値を代入 */
    x.real = 3.0;
    x.imaginary = 2.0;

    y.real = 1.0;
    y.imaginary = -4.0;

    ShowComplex("s", x);
    ShowComplex("t", y);

    z = add_complex(x, y);        /* 複素数の和を z に代入 */
    ShowComplex("s + t", z);

    z2 = multiply_complex(x, z);        /* 複素数の積を z に代入 */
    ShowComplex("s(s + t)", z2);
}
