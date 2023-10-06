#include <stdio.h>

// 매개변수가 없는 함수. 반환형만 존재. 정의부에서 입력을 받기 때문에 매개변수가 필요 없다.
// 괄호 안을 비워 놓아도 효과는 동일하다. 그러나 명시적으로 void를 작성해 주는 것이 낫다.
int get_num(void);

int main(void)
{
    int result;

    result = get_num();
    printf("반환값 : %d\n", result);

    return 0;
}

int get_num(void)
{
    int num;
    printf("양수 입력: ");
    scanf("%d", &num);

    while (num < 0)
    {
        printf("양수를 입력하세요!\n");
        printf("양수 입력: ");
        scanf("%d", &num);
    }

    return num;
}
/*
양수 입력: -52
양수를 입력하세요!
양수 입력: -544
양수를 입력하세요!
양수 입력: 12
반환값 : 12
*/