#include <stdio.h>

int main(void)
{
    int age;
    double height;

    printf("나이와 키를 입력하세요 : ");
    scanf("%d%lf", &age, &height); // 나이와 키를 함께 입력. spacebar, enter, tab 사용해서 인자를 구분
    printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);

    return 0;
}