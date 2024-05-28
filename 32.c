#include <stdio.h>
int main(void)
{
    int suNo;
    printf("숫자 개수 입력: ");
    scanf("%d", &suNo);

    int A[suNo + 1];
    int S[suNo + 1];
    printf("숫자 배열 입력 (%d개): ", suNo);
    for (int i = 1; i <= suNo; i++)
    {
        scanf("%d", &A[i]);
    }
    S[0] = A[0];
    for (int i = 1; i <= suNo; i++)
    {
        S[i] = S[i - 1] + A[i];
    }
    printf("합 배열 출력: ");
    for (int i = 1; i <= suNo; i++)
    {
        printf("%d ", S[i]);
    }
    printf("\n");
}