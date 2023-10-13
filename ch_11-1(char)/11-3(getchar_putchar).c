#include <stdio.h>

int main(void)
{
    int ch; // int형 변수

    ch = getchar(); // 함수가 반환하는 문자를 바로 저장. getchar는 입력 문자의 아스키 코드 값을 반환한다.
    // 따라서 int형 변수 에 할당한다.

    printf("입력한 문자 : ");
    putchar(ch); // 입력한 문자 출력. 문자 상수나 아스키 코드 값을 인수로 주면 해당 문자를 화면에 출력한다.
    // 오류 발생 시 -1을 반환한다.
    putchar('\n'); // 개행 문자 출력

    return 0;
}
/*
결과:
A
입력한 문자 : A

*/

/*
scanf 함수는 문자뿐만 아니라 숫자도 입력하는 기능이 포함되어 있다.
따라서 문자만 입력하는 함수에 비해 크기가 크다. 이는 printf도 마찬가지이다.

따라서 문자만 입출력하는 경우는 문자 전용 함수를 쓰는 것이 효율적이다.
getchar함수와 putchar함수는 문자 전용 입출력 함수로 원형은 아래와 같다.

int getchar(void);
int putchar(int);

*/