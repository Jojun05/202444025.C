#include <stdio.h>

int main()
{
    int number;

    scanf("%d", &number);

    if (number < 0) //-1~부터 시작하면 1출력하는것
    {
        printf("1\n");
    }
    else //거꾸로 해도 ok인데 내가 쉽게보기위한것 ㅇㅇ
    {
        for (int i = 1; i <= 9; i++)
        {
            printf("%d x %d = %d\n", number, i, number * i);
        }
    }

    return 0;
}