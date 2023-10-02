#include <stdio.h>
int main(void)
{
    int a = 10, b = 20, res;

    res = (a > b) ? a : b; // a와 b 중에 큰 값이 res에 저장
    printf("큰 값: %d\n", res);

    /*
    조건 연산자의 피연산자에 대입식 사용
    */

    res = (a > b) ? (res = a) : (res = b);
    printf("큰 값: %d\n", res);

    /*
    참인 경우와 거짓인 경우 결과를 반영하는 대상이 다를 때 사용이 용이하다.
    (a > b) ? (res1 = a) : (res2 = b);

    위 대입식의 경우는 res가 중복 사용되었으므로 바람직하다고 볼 수는 없다.
    */
    return 0;
}