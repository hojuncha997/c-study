#include <stdio.h>

int main(void)
{
    float ft = 1.2345670123456789; // 유효 숫자가 많은 값으로 초기화
    double db = 1.2345670123456789;

    printf("float형 변수의 값 : %.20f\n", ft); // 소수점 이하 20자리까지 출력
    printf("double형 변수의 값 : %.20lf\n", db);

    return 0;
}

/*
    실수 자료형은 크기에 따라
    float, double, long double로 저장한다.
    가장 작은 float도 저장범위가 크다. double은 8바이트, long double은 그 이상 사용한다.

float형 변수의 값 : 1.23456704616546630859
double형 변수의 값 : 1.23456701234567889358

초깃값과 출력이 다르다.
float은 유효 숫자 7자리, double형은 15자리 범위에서 사용하는 것이 좋다.
*/