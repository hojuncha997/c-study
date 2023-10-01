#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, c = 10;
    int res; // 결괏값을 저장할 변수

    res = (a > b); //  10 > 20은 거짓이므로 결괏값은 0
    printf("a > b : %d\n", res);
    res = (a >= b);
    printf("a >= b : %d\n", res);
    res = (a < b);
    printf("a < b : %d\n", res);
    res = (a <= b);
    printf("a <= b : %d\n", res);
    res = (a <= c);
    printf("a <= c : %d\n", res);
    res = (a == b);
    printf("a == b : %d\n", res);
    res = (a != c);
    printf("a != c : %d\n", res);

    return 0;
}

/*
컴파일러는 참과 거짓을 1과 0으로 판단한다.
따라서 관계식을 실행 조건 검사에 사용할 수 있다.
*/