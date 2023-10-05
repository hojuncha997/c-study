#include <stdio.h>

// 두 실수의 평균을 구하는 함수 선언
double average(double, double);

int main(void)
{
    double res;
    res = average(1.5, 3.4);
    printf("average : %.2lf\n", res);

    return 0;
}

double average(double a, double b)
{
    double temp;
    temp = a + b;
    return (temp / 2.0);
}

// 두 실수의 평균을 구하는 함수 정의