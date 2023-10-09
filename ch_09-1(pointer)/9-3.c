#include <stdio.h>

int main(void)
{

    int a = 10, b = 15, total;
    double avg;
    int *pa, *pb;
    int *pt = &total;
    double *pg = &avg;

    pa = &a; // 포인터 pa에 변수 a의 주소 대입
    pb = &b; // 포인터 pb에 변수 b의 주소 대입

    *pt = *pa + *pb; // total = a + b;
    *pg = *pt / 2.0; // avg = total / 2.0

    printf("두 정수의 값: %d, %d\n", *pa, *pb);
    printf("두 정수의 합: %d\n", *pt);
    printf("두 정수의 평균: %.1lf\n", *pg);

    return 0;
}