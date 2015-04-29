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