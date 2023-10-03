#include <stdio.h>
int main(void)
{
    int a = 20;
    int b = 0;

    if (a > 0)
    {
        b = a;
    }

    printf("a :%d, b: %d\n", a, b);

    return 0;
}

/*
if문은 중괄호를 생략할 수 있다. 따라서 아래와 같이 쓸 수 있다.

if(a>b)
    b=a;

또는

if(a>b) b=a;

그러나 되도록이면 가독성을 위해 중괄호를 쓰는 편이 낫다.
실행문이 두 줄 이상이면 무조건 중괄호로 묶어야 한다. 그렇지 않으면 아래쪽 실행문은 조건과 무관히 실행된다.
*/