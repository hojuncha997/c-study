#include <stdio.h>

int main(void)
{
    char fruit[20] = "strawberry"; // char 배열 선언과 초기화

    printf("딸기: %s\n", fruit);
    printf("딸기잼: %s %s\n", fruit, "jam");

    return 0;
}

/*
문자열은 char형을 배열 형태로 만들어 저장한다.

char 배열명[문자열길이+1] = 문자열;

char fruit[6] = "apple";

문자열의 길이보다 배열의 크기를 하나 더 크게 설정하는 이유는,
컴파일러가 문자열 끝에 \0(null character)를 자동으로 추가하기 때문이다.
널 문자는 문자열의 끝을 표시하는 특별한 문자이다.
*/