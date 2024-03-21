#include <stdio.h>

int main(void)
{
    for (int j = 5; j >= 1; j--)
    {
        for (int i = 1; i <= j; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
