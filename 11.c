#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    int sum = 0;
    int count = 0;
    printf("다섯 개의 정수를 입력하세요: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int a1 = a;
    for (int i = 0; i < 5; i++)
    {
        if (a1 % 2 == 1)
        {
            sum += a1;
            count++;
        }
   
        if (i == 0)
            a1 = b;
        else if (i == 1)
            a1 = c;
        else if (i == 2)
            a1 = d;
        else if (i == 3)
            a1 = e;
    }

    if (count == 0)
    {
        printf("홀수없음.\n");
    }
    else
    {
        printf("홀수 값의 합: %d\n", sum);
        printf("홀수의 평균: %.2f\n", (float)sum / count);
    }

    return 0;
}
