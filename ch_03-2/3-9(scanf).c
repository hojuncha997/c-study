#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a); // 여기서 변수 a에 값 입력후 엔터 ex)19

    printf("입력된 값: %d\n", a);
    return 0;
}

/*
키보드에서 타이핑하는 모든 내용은 문자로 인식된다.
따라서 입력한 데이터를 연산이 간으한 정수나 실수로 사용하려면 변환 과정이 필요하다.
scanf(scan formatted) 함수는 입력 문자들을 스캔하여 원하는 형태의 데이터로 변환한다.
변환할 데이터의 형식은 변환 문자를 통해 결정한다. *변환문자는 쌍따옴표로 감싼다.

scanf의 파라미터는 변환문자와 &(앰퍼샌드) 기호를 붙인 변수이다.

19
입력된 값: 19

&: 앰퍼샌드 기호는 변수의 주소를 구하는 연산자이다.
변환문자와 자료형 일치:
    scanf 함수는 변환문자와 입력형태가 다르면 데이터를 입력하지 못할 수 도 있다.
    키보드 입력 데이터는 모두 문자로 처리된다.
    scanf함수는 변환 문자를 보고 입력값의 정수,실수,문자열 변환 여부를 판단한다.
    그런데 만약 변환 문자와 다른 데이터가 입력되면 scanf 함수는 변환을 포기하고 실행을 중단한다.

    ex) %d를 지정했는데 abc를 입력하면 정수로 변환할 수 없으므로 함수 실행이 종료된다.
    물론 프로그램은 계속 진행된다. 그러나 변수에 값이 입력되지 않았으므로 scanf 함수 실행 이전에 변수에 있던
    쓰레기 값이 계속 사용된다.

*/