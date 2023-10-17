#include <stdio.h>

char *my_strcat(char *pd, char *ps);

int main(void)
{
    char str[80] = "strawberry";

    printf("바꾸기 전 문자열 : %s\n", str);

    my_strcat(str, "apple"); // 문자열 "apple" 복사

    printf("바꾼 후 문자열 : %s\n", str);
    printf("다른 문자열 대입 : %s\n", my_strcat(str, "kiwi")); // 반환값으로 출력. 그런데
    // ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]gcc

    return 0;
}

char *my_strcat(char *pd, char *ps)
{
    char *po = pd; // pd 값을 나중에 반환하기 위해 보관

    while (*pd != '\0') // ps가 가리키는 문자가 널 문자가 아닐 동안
    {
        pd++; // 복사 받을 다음 위치로 포인터 증가
    }

    while (*ps != '\0') // ps가 가리키는 문자가 널 문자가 아닐 동안
    {
        pd++; // 복사 받을 다음 위치로 포인터 증가
        ps++;
    }

    *pd = '\0'; // 복사가 모두 끝난 후 복사 받을 곳에 널 문자로 마무리

    return po; // 복사가 끝난 저장 공간의 시작 주소 반환
}
