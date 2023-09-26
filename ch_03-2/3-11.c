#include <stdio.h>

int main(void)
{
    char grade;
    char name[20];

    printf("학점 입력 : ");
    scanf("%c", &grade);

    printf("이름 입력 : ");
    scanf("%s", name); // &를 사용하지 않는다. 문자열 입력

    printf("%s의 학점은 %c입니다.\n", name, grade);

    return 0;
}

/*
    char형 문자를 입력할 때는 키보드로 입력하는 모든 문자가 대상이 된다.
    공백문자(spacebar), 개행문자(enter)도 하나의 문자로 전달된다.
    문자열은 char 배열에 %s 변환문자를 사용하여 입력하는데, 문자열을 입력할 때에는 &를 붙이지 않는다.

    또한 스페이스나 엔터, 탭을 만나면 바로 전까지만 저장된다.
    따라서 공백 없이 연속으로 입력해야 한다.
*/