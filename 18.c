#include <Stdio.h>
void Start();
int main(void)
{
    printf("Start() 함수 3회 호출 결과 \n");
    Start();
    Start();
    Start();
    return 0;
}
void Start()
{
    //스테딕은 내부연결만 가능
    //정적변수는 누적 동적변수는 사라짐
    static int s_cnt = 0;
    int a_cnt = 0;
    printf("정적 변수 = %d\t 동적변수 = %d\n", s_cnt, a_cnt);
    s_cnt++;
    a_cnt++;
}