#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int count = 1;
    int MAX = A[N - 1];
    for (int i = N - 2; i >= 0; i--)
    {
        if (A[i] > MAX)
        {
            count++;
            MAX = A[i];
        }
    }

    printf("%d\n", count);

    return 0;
}
