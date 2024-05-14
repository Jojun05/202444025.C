#include <stdio.h>
#define CNT 9
void arrey_l(int a[], int cnt)
{
    for (int i = 0; i < cnt; i++)
    {
        a[i] += 1;
    }
}
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("before\n");
    for (int i = 0; i < CNT; i++)
    {
        printf("%d ", a[i]);
    }
    arrey_l(a, CNT);
    printf("\nafter\n");
    for (int i = 0; i < CNT; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}