#include <stdio.h>
int main(void)
{
    int sum, n = 0;
    scanf("%d", &n);
    char str[100];
    scanf("%s", str);
    for (int i = 0; i < n; i++){
         sum += str[i] - '0';
    }
    printf("%d", sum);
}