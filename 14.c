#include <stdio.h>
int Fact(int n);
int main(void)
{
    int input;
    int resulu;

    //팩토리얼 정수 입력하는곳
    printf("전달 > 팩토리얼 구할 정수 입력 : ");
    scanf("%d", &input);

    //fact함수 밑에있음 
    //input 값에서 n*Fact부분때문에 마이너스 하는거같음
    printf("호출>Fact()함수 호출하여 팩토이얼 계산 \n");
    resulu = Fact(input);
    printf("회신 > %d! : %d\n", input, resulu);
    return 0;
}
int Fact(int n)
{
    if (n <= 1)
        return 1;
    else
    {
        printf("수행 > %d! : %d * (%d-1)\n", n, n, n);
        return(n*Fact(n-1));
    }
}