#include <stdio.h>

int my_strcmp(char *pa, char *pb);

int main(void)
{
    char str[80] = "strawberry";

    printf("바꾸기 전 문자열 : %s\n", str);

    my_strcmp(str, "apple"); // 문자열 "apple" 복사

    printf("바꾼 후 문자열 : %s\n", str);
    printf("다른 문자열 대입 : %s\n", my_strcmp(str, "kiwi")); // 반환값으로 출력.
    return 0;
}

int my_strcmp(char *pa, char *pb)
{
    while ((*pa == *pb) && (*pa != '\0'))
    {
        pa++; // 복사 받을 다음 위치로 포인터 증가
        pb++; // 복사할 다음 문자의 위치로 포인터 증가
    }

    if (*pa > *pb)
    {
        return 1;
    }
    else if (*pa < *pb)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

/*
오류 발생하므로 검토 필요

*/