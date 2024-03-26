#include <stdio.h>

void main()
{
    int a, b, c, d, e;
    printf("5개의 수를 입력하시오");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d %d %d %d %d",a+3,b-3,c*3,d/3,d%2);
}