#include <stdio.h>
#include <string.h> //문자열을 다룰 수 있는 string.h 헤더 파일 포함

int main(void)
{
    char fruit[20] = "strawberry"; //  strawberry로 초기화
    printf("%s\n", fruit);         //  strawberry 출력

    strcpy(fruit, "banana"); //  fruit 배열에 banana 복사
    printf("%s\n", fruit);

    return 0;
}

/*
    char 배열에 초기화 이외의 문자열을 저장할 때는 strcpy 함수를 사용한다.

    strawberry
    banana
*/