#include <stdio.h>

int main(void)
{
    /*
    자료형은 크게 정수형과 실수형으로 나뉜다.

    정수형

    char: 1바이트 (-2^7 ~ 2^7-1 의 값을 저장할 수 있음. 컴파일러는 프로그램에서 사용하는 문자를 0~127 사이의 정수(아스키 코드값으로 처리))
    short: 2바이트
    int: 4바이트
    long: 4바이트
    long long: 바이트
    */

    char ch1 = 'A'; // 문자로 초기화, 저장된 문자의 아스키 코드값
    char ch2 = 65;  // 문자 'A'의 아스키 코드 값에 해당하는 정수로 초기화

    printf("문자 %c의 아스키 코드 값: %d\n", ch1, ch1);
    printf("아스키 코드 값이 %d인 문자: %c\n", ch2, ch2);

    return 0;
}