#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, res;

    a + b;                                 // 연산결과는 버려진다.
    printf("%d + %d = %d\n", a, b, a + b); // 연산결과를 바로 출력에 사용

    res = a + b;                         // 연산 결과를 변수에 저장
    printf("%d + %d = %d\n", a, b, res); // 저장된 값을 계속 사용

    return 0;
}

/*

1. 연산식이 컴퓨터 내부에서 처리되는 과정

sum = a + b의 연산과정

연산을 하려면 메모리에 있는 a와 b의 값을 CPU의 저장공간인
레지스터에 복사해야 한다.

이 과정을 load라고 하며 연산 명령 이전에 수행된다.
1.1. 메모리의 a값이 로드되고,
1.2. b의 값이 로드된다.
1.3. '+' 명령이 수행된다.
1.4. 결괏값이 일단 레지스터에 저장된다.
1.5. 대입연산을 수행하여 메모리 공간인 sum에 복사된다. 이 과정을 store라고 한다.


2. CPU의 메모리와 RAM의 차이

CPU의 메모리를 레지스터라고 한다.
레지스터에는 연산할 데이터와 연산 후의 결과를 임시저장한다.
보통 레지스터는 CPU의 클럭과 1:1 동기화 되어 있어 RAM에 비할 수 없이 빠르다.

다만 레지스터는 다음 연산을 위해 계속 사용되므로
연산 결과를 메모리로 옮겨놓지 않으면 그 값은 사라진다.


*/