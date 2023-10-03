#include <stdio.h>
int main(void)
{
    // 키보드로 수식을 입력하면 계산 결과를 출력하는 프로그램

    printf("사칙연산 입력(정수): ");
    int a, b, result;
    char oper;
    scanf("%d%c%d", &a, &oper, &b);

    switch (oper)
    {
    case '+':
        result = a + b;
        printf("%d + %d = %d", a, b, result);
        break;
    case '-':
        result = a - b;
        printf("%d - %d = %d", a, b, result);
        break;
    case '*':
        result = a * b;
        printf("%d * %d = %d", a, b, result);
        break;
    case '/':
        result = a / b;
        printf("%d / %d = %d", a, b, result);
        break;
    }

    return 0;
}