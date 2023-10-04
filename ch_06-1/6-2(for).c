#include <stdio.h>
int main(void)
{

    int a = 1;
    // int i;

    for (int i = 0; i < 3; i++)
    {
        a = a * 2;
    }
    printf("a : %d\n", a);

    return 0;
}
// 조건식은 되도록 간단히 표현하는 것이 좋다.
// 또한 반복문을 세는 변수를 반복문 안에서 바꾸지 않는 것이 좋다.
// 초기식, 조건식, 증감식의 위치를 바꾸면 for문과 while문은 호환된다.