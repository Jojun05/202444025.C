#include <stdio.h>
int main()
{
    //보다 크면 > 작으면 < 같으면 ==
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf(">");
    }
    else if (a < b)
    {
        printf("<");
    }
    else
        printf("==");
}