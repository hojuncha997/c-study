#include <stdio.h>

int main(void)
{
    short sh = 32767;                // short 형의 최댓값 초기화
    int in = 214783647;              // int형의 최댓값 초기화
    long ln = 214783647;             // long형의 최댓값 초기화
    long long lln = 123451234512345; // 아주 큰 값 초기화

    printf("short형 변수 출력: %d\n", sh);
    printf("int형 변수 출력: %d\n", in);
    printf("long형 변수 출력: %ld\n", ln);
    printf("long long형 변수 출력: %lld\n", lln); // long long형은 lld로 출력

    printf("long long형의 크기: %d 바이트\n", sizeof(long long)); // sizeof는 자료형의 크기를 바이트 단위로 계산해준다.

    return 0;

    /*
    특별한 경우가 아니면 정수형은 int를 사용한다.
    int형은 연산의 기본단위로 가장 빠르게 연산된다.
    short 형은 int형보다 작아 메모리를 적게 사용하지만 연산 과정에서는 int형으로 변환되므로 실행속도가 느려진다.
    long long은 크기가 8바이트이므로 int형의 저장 범위보다 크지만 메모리 낭비가 크다.

    long형은 큰 값을 저장할 때 사용한다.
    보통 컴파일러에서 int형은 4바이트이다. 간혹 2바이트로 구현된 컴파일러가 있다. 이런 경우 long을 사용한다.

    */
}