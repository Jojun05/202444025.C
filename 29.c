#include <stdio.h>
int main(void)
{
    char str[20];
    int cnt, lenght = 0;

    printf("문> 문자열을 20바이트 이내로 입력하세요 : ");
    scanf("%s", str, sizeof(str));
    for (cnt = 0; str[cnt] != '\0'; cnt++)
    {
        lenght++;
        printf("\n");
    }
    printf("답> 입력한 문자열의 길이 %d바이트\n", lenght);
    return 0;
}