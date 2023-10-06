#include <stdio.h>

// 함수 선언: 매개변수, 반환값 X
void print_line(void);

int main(void)
{
    print_line(); // 함수 호출
    printf("학번    이름    전공    학점\n");
    print_line(); // 함수 호출

    return 0;
}

void print_line(void)
{
    int i;

    for (i = 0; i < 50; i++)
    {
        printf("-");
    }

    printf("\n");
}
