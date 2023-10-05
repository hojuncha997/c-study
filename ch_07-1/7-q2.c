#include <stdio.h>
// 187cm를 미터 단위로 환산하여 출력하는 프로그램 작성.
// cm을 m로 환산하여 반환하는 함수를 만들고 함수 호출을 통해 구현

double centi_to_meter(int);

int main(void)
{
    double res;

    res = centi_to_meter(187);
    printf("res: %.2lfm\n", res);
    return 0;
}

double centi_to_meter(int centi)
{
    double temp;

    // temp = centi / 100; => 1.00
    temp = (double)centi / 100; // => 1.87

    printf("temp: %.2lf\n", temp);
    return temp;
}
