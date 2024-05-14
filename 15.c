#include <stdio.h>
int sum(int cnt);
int main(void)
{
    int input, a = 0;
    scanf("%d", &input);
    a = sum(input);
    printf("%d", a);
}
int sum(int cnt)
{
    if (cnt == 1)
        return 0;
    else
        return (cnt + sum(cnt - 1));
}
