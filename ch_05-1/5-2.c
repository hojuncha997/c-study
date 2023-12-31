#include <stdio.h>
int main(void)
{
    int a = 10;

    if (a >= 0)
    {
        a = 1;
    }
    else
    {
        a = -1;
    }

    printf("a : %d\n", a);

    return 0;
}

/*
if~else문도 기본 if문처럼 실행문이 한 문장인 경우는 중괄호를 생략할 수 있다.
마찬가지로 두 문장 이상인 경우는 반드시 중괄호로 묶어야 한다.

경우에 따라서는 if문을 두 번 사용하는 것보다 if ~ else를 사용하는 편이 좋다.
if문을 두 번 쓰는 경우 조건식을 잘못 설정하면 두 조건문을 전부 실행할 수 있다.
if ~ else문을 사용하는 경우 그럴 염려가 없으며, 또한 if문이 맞을 경우 else를 검사하지 않으므로 성능상에도 더 좋다.

*/