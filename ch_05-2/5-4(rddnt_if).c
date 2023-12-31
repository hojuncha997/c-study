#include <stdio.h>
int main(void)
{
    int a = 20, b = 10;

    if (a > 10)
    {
        if (b >= 0)
        {
            b = 1;
        }
        else
        {
            b = -1;
        }
    }
    printf("a : %d, b : %d\n", a, b);

    return 0;
}

/*
-선행조건이 필요할 때 if문을 중첩해서 사용한다.
선행조건이 없이 단순히 특정 값에 따라 실행을 달리 하는 경우는 switch~case문이 편리하다

-중첩if문을 사용하지 않더라도 두 개의 조건 문과 논리곱 연산을 사용해서 동일한 결과를 얻을 수는 있다.
그러나 이 경우 불필요한 조건 검사를 해야 하므로 효율이 떨어진다.

-선행조건이 필요하지 않아도 의도적으로 중첩if문을 사용할 수 있다.
큰 범위의 조건을 하나씩 비교하지 않고 여러 개의 조건문으로 나누면 필요 없는 조건은 실행하지 않으므로 효율적이다.
이를 "분할 정복 기법(divide and conquer)"이라고 한다.

-중첩if문에서도 중괄호를 생략할 수 있으나 가독성을 위해 중괄호를 사용하자.

*/