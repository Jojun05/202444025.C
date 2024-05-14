#include <stdio.h>
int Fact(int n);
int main(void)
{
    int input;
    int re;
    printf("점수입력 : ");
    scanf("%d", &input);
    re = Fact(input);
    return 0;
}
int Fact(int n)
{
    if (n <= 0)
        return 0;
    else
    {
        printf("%d\n", n);
        return (n * Fact(n - 1));
    }
}