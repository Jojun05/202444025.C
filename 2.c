#include <stdio.h>
int main()
{ //합
    int n = 0, a = 0;
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        a += i;
    }
    printf("%d", a);
}