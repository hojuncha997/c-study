// 지수형태의 실수 상수

#include <stdio.h>

int main(void)
{
    printf("%.1lf\n", 1e6);       // 1000000.0
    printf("%.7lf\n", 3.14e-5);   // 0.0000314
    printf("%le\n", 0.0000314);   // 소수점 형태의 실수를 지수 형태로 출력 (3.14e-5와 같다.)
    printf("%.2le\n", 0.0000314); // 3.14e-5

    return 0;
}

// 정수 상수는 4바이트 정수형 변수에 저장되고, 실수 상수는 8바이트 실수형 변수에 저장된다.
// 일반적인 계산이라면 정수 상수를 사용하는 것이 좋다. 정수 상수는 4바이트 정수형 변수에 저장되므로 메모리를 덜 차지한다.

/*
1000000.0
0.0000314
3.140000e-05
3.14e-05

*/