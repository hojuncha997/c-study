#include <stdio.h>
int main(void)
{

    int a = 10, b = 20;
    int res = 2;

    a += 20;       //  a와 20을 더한 결과를 다시 a에 저장 (+=)
    res *= b + 10; //  b에 10을 더한 결괏값에 res를 곱하고 다시 res에 저장 (*=)

    printf("a = %d, b=%d\n", a, b);
    printf("res = %d\n", res);

    return 0;
}

/*
복합대입 연산자
: 연산결과를 즉시 피연산자에 저장하는 경우 사용

종류는 아래 다섯 가지
+=, -=, *=, /=, %=

결국 메모리에서 값을 load해 와 계산해서 레지스터에 저장했다가 마지막에 다시 메모리에 store하는 것이다.

*/
