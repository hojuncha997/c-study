#include <stdio.h>
int main(void)
{
    int a = 0, b = 0;

    if (a > 0)
    {
        b = 1;
    }
    else if (a == 0)
    {
        b = 2;
    }
    else
    {
        b = 3;
    }

    printf("b : %d\n", b);

    return 0;
}
// else if 문의 조건이 맞으므로 그 아래의 else문은 건너 뛴다.
// 순서가 중요하지 않은 경우 참이 될 가능성이 많은 조건식을 먼저 사용하면 조건식 검사 횟수를 줄일 수 있다.