#include <stdio.h>

int more_big(int x, int y)
{
    return (x > y) ? x : y;
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", more_big(x, y));
    return 0;
}