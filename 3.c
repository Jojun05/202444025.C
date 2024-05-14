#include <stdio.h>
int main()
{ //영수증
    int x = 0, y = 0;
    int a = 0, b = 0;
    scanf("%d", &x);
    scanf("%d", &y);

    for (int i = 0; i < y; i++)
    {
        scanf("%d %d", &a, &b);
        x -= a * b;
    }
    if(x==0){
        printf("Yes");
    }else{
        printf("No");
    }
}