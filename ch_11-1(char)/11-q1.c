#include <stdio.h>

int main(void)
{
    char ch;

    printf("문자 입력: ");

    scanf("%c", &ch);

    printf("%c 문자의 아스키 코드 값: %d\n", ch, ch);

    return 0;
}

/*
결과:
문자 입력: Q
Q 문자의 아스키 코드 값: 81
*/