#include <stdio.h>
#define MAX_NUMBERS 100 //최대숫자 상수
#define RANGE 10 

void readNumbers(int numbers[], int n);
void calculateFrequency(int numbers[], int n, int frequency[]);
void printFrequency(int frequency[], int range);

int main()
{
    
    int N;
    printf("Enter the number of elements (up to %d): ", MAX_NUMBERS);
    scanf("%d", &N); //여기서 최대 요소 수를 입력받음
    if (N < 1 || N > MAX_NUMBERS) //프로그램이 비정상으로 끝나면 밑에꺼 반환
    {
        printf("valid number of elements. Please enter a number between 1 and %d.\n", MAX_NUMBERS);
        return 1; 
    }
    int numbers[N];
    readNumbers(numbers, N);
    //숫자 배열이 맞으면 숫자 읽고 숫자의 빈도 계산 int 프리퀀시는 0초기화 
    int frequency[RANGE] = {0}; //모든 요소가 초기상태로
    calculateFrequency(numbers, N, frequency);
    printFrequency(frequency, RANGE);

    return 0;
}

void readNumbers(int numbers[], int n)
{
    printf("Enter %d numbers (0-9):\n ", n); // 숫자 입력받는곳
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
        if (numbers[i] < 0 || numbers[i] > 9) // 0~9를 넘어가면 밑에껄 printf i--가 들어간건 다시 입력받기 위한거
        {
            printf("Invalid number %d. Please enter a number between 0 and 9.\n", numbers[i]);
            i--;
        }
    }
}
// 여기 위에서 받은 숫자 배열을 반복하면서 각 숫자의 빈도를 증가시킴
void calculateFrequency(int numbers[], int n, int frequency[])
{
    for (int i = 0; i < n; i++)
    {
        frequency[numbers[i]]++;
    }
}

//마지막 frequency에 저장된 숫자 빈도 출력
void printFrequency(int frequency[], int range)
{
    for (int i = 0; i < range; i++)
    {
        printf("Number %d: %d times\n", i, frequency[i]);
    }
}