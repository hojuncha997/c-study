#include <stdio.h>
#include <string.h> // 문자열 관련 함수 원형을 모아놓은 헤더 파일. 여기서는 strcpy 함수에 접근하기 위해 사용

int main(void)
{
    char str1[80] = "cat";
    char str2[80];

    strcpy(str1, "tiger"); //  str1 배열에 "tiger" 복수
    strcpy(str2, str1);    //  str2 배열에 str1 배열의 문자열 복사

    printf("%s, %s\n", str1, str2);

    return 0;
}

/*
결과: tiger, tiger


strcpy(저장될 배열명, 저장할 문자열)
// 첫 번째 인수에는 문자열 상수를 사용할 수 없다.
// 두 번째 인수에는 문자열 상수 뿐만 아니라 char형 배열의 배열명도 사용할 수 있다. strcpy(저장될_배열명, 저장할_배열명); -> strcpy(str2, str1)

# 배열에 대입 연산자는 사용할 수 없는 이유:
char str[80]; str = "apple";  ==> 컴파일 에러
대입 연산자 왼쪽에 사용한 배열명이 컴파일의 과정에서 배열이 할당된 메모리의 주소값으로 바뀌기 때문.
예를 들어 str 배열이 메모리 100번지부터 할당되었다면 다음과 같이 대입하는 것과 같다.
100 = "apple"; // 100은 상수로 대입연산자의 왼쪽에 올 수 없으므로 컴파일 에러 발생.
strcpy 함수에서 사용할 수 있는 것은 strcpy함수가 그 위치로 이동하여 메모리의 공간을 사용하도록 구현돼 있기 때문.
*/