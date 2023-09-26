#include <stdio.h>

int main(void)
{
    int income = 0;
    double tax;
    const double tax_rate = 0.12;

    income = 456;
    tax = income * tax_rate;
    printf("세금은 : %.1lf입니다.\n", tax);

    // tax_rate = 3.1;

    return 0;
}

/*
    const를 사용하면 이후에는 값을 바꿀 수 없으므로 반드시 선언과 동시에 초기화 해야 한다.
    초기화 하지 않으면 변수의 쓰레기 값이 계속 사용되며,
    초기화 이후에 값을 변경하려고 하면 컴파일 과정에서 에러를 발생시킨다.

    expression must be a modifiable lvalueC/C++(137)

    변수에 const를 붙이면 복잡한 값을 의미 있는 이름으로 쓸 수 있고, 값이 바뀌지 않음을 보장받을 수 있다.
    const를 사용하면 변수가 상수처럼 쓰이지만 엄연한 변수이다.
    따라서 주소 연산자로 메모리의 위치를 알 수 있으며 사용 범위의 제한 규칙도 그대로 적용된다.

*/