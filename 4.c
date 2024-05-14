#include <stdio.h>
int main()
{ 
    //별찍기
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}