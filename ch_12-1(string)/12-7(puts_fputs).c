#include <stdio.h>

int main(void)
{
    char str[80] = "apple juice"; // 배열에 문자열 초기화
    char *ps = "banana";          // 포인터에 문자열 연결

    puts(str);         // apple juice 출력하고 줄 바꿈
    fputs(ps, stdout); // banana만 출력
    puts("milk");      // banana에 이어 milk출력

    return 0;
}

/*결과:
apple juice
bananamilk
*/

/*
#   문자열을 출력하는 puts, fputs 함수
:
- 화면에 문자열만을 출력할 때는 전용 출력함수인 puts와 fputs를 사용한다.
puts함수 원형
int puts(const char *str)   //문자열을 출력하고 자동 줄 바꿈

- fputs 함수 원형
int puts(const char *str, FILE *stream);    //문자열을 출력하고 줄 바꾸지 않음

puts와 fputs 함수 모두 정상 출력된 경우 0을 반환하고 출력실패하면 EOF(-1)를 반환한다.

puts와 fputs 함수는 문자열의 시작 위치부터 널 문자가 나올 때까지 모든 문자를 출력한다.
따라서 char 배열의 배열명이나 문자열 상수를 연결하고 있는 포인터를 인수로 줄 수 있다.
물론 상수를 직접 주는 것도 가능하다. 어떤 경우든 문자열에서 첫 번째 문자의 주소가 되므로
결국 문자열이 출력된다.

*/