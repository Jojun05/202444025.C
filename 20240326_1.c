#include <stdio.h>

int plus(int a, int b);
int minus(int a, int b);
int multi(int a, int b);
int divde(int a, int b);
void main()
{
    int c = 10;
    int d = 20;
    int result = 0;
    result = plus(c, d);
    printf("%d + %d = %d\n", c, d, result);
    printf("%d - %d = %d\n", c, d, result=minus(c,d));
    printf("%d * %d = %d\n", c, d, result=multi(c,d));
    printf("%d / %d = %d\n", c, d, result=divde(c,d));
}
int plus(int a, int b)
{
    return a + b;
}
int minus(int a, int b)
{
    return a - b;
}
int multi(int a, int b)
{
    return a * b;
}
int divde(int a, int b)
{
    return a / b;
}