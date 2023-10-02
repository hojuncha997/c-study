#include <stdio.h>

int main(void)
{
    int seats = 70;
    int audience = 65;
    double rate;

    // rate = audience / seats; 항상 0이 출력됨
    rate = (double)audience / (double)seats * 100;

    // printf("rate: %.d\n", rate); 예상치 못한 값 출력
    printf("rate: %.1lf%c\n", rate, '%'); // rate: 92.9%
    printf("rate: %.1lf%s\n", rate, "%"); // rate: 92.9%

    return 0;
}