#include <stdio.h>
int main(void)
{
    /*
    체중kg과 키cm을 입력하여 BMI를 구한 후에 BMI 값이 20.0이상, 25.0미만이면 "표준입니다"를,
    아니면 "관리 필요"를 출력한다.

    BMI는 몸무게를 키의 제곱으로 나누어 구한다. 이 때 키는 미터 단위이다.
    */

    double kg, cm, bmi, meterHeight;
    printf("몸무게(kg)와 키(cm) 입력 : ");
    // scanf("%.1lf %.1lf", &kg, &cm);
    scanf("%lf %lf", &kg, &cm);

    meterHeight = cm / 100;

    bmi = kg / (meterHeight * meterHeight);

    printf("%.1lf %.1lf %.2lf\n", kg, cm, bmi);

    (25.0 > bmi > 20.0) ? printf("표준입니다.") : printf("관리필요");

    return 0;
}

/*
scanf("%.1lf %.1lf", &kg, &cm);에서 %.1lf는 출력 포맷에 대한 서식 지정자로 사용되며,
 입력을 받을 때는 필요하지 않다. 입력을 받을 때는 단순한 데이터 타입의 서식 지정자만 사용해야 한다.
*/