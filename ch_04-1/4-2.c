#include <stdio.h>

int main(void)
{
    double apple; //    실수
    int banana;   //    정수
    int orange;   //    정수

    apple = 5.0 / 2.0; //  실수와 실수의 나누기 연산
    banana = 5 / 2;    //  정수와 정수의 나누기 연산
    orange = 5 % 2;    //  정수와 정수의 나머지 연산(%)

    printf("apple : %.1lf\n", apple); // 2.5
    // printf("apple : %d\n", apple); => 0

    printf("banana : %d\n", banana); // 2
    // printf("banana : %0.1lf\n", banana); => 0.0

    printf("orange : %d\n", orange); // 1
    // printf("orange : %.1lf\n", orange); => 0.0

    return 0;
}
