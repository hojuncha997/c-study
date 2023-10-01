#include <stdio.h>

int main(void)
{
    // 4.0과 1.2의 사칙연산 한 값을 소수점 이하 첫째 자리까지 출력

    double a = 4.0, b = 1.2;

    printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
    printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
    printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
    printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);

    return 0;
}