#include <stdio.h>

int main(void)
{
    // %d는 정수를 출력한다.
    printf("%d\n", 10);

    /*
        %lf는 double형 실수를 출력한다. lf는 long float의 약자이다. lf는 f와 비교했을 때 더 큰 범위의 실수를 의미한다.
        %lf로 실수를 출력하면 소수점 이하 6자리까지 출력된다. 이 때 소수점의 자릿수를 바꾸려면 %.1lf와 같이 사용하면 된다.
        잘리는 값은 반올림 된다.
    */

    printf("%lf\n", 3.4);

    // %f는 float형 실수를 출력한다.
    printf("%.1f\n", 3.45);

    printf("%d와 %d의 합은 %d이다.\n", 10, 20, 10 + 20);

    printf("%.1lf-%.1lf=%.1lf\n", 3.4, 1.2, 3.4 - 1.2);

    printf("%d를 %d로 나누면 %lf이다.", 1, 2, 0.5);

    return 0;
}