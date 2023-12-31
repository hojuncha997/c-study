#include <stdio.h>

int main(void)
{
    // 변수를 선언하고 초기화
    char ch;
    int in;
    double db;

    // 포인터를 선언하고 초기화
    char *pc = &ch;
    int *pi = &in;
    double *pd = &db;

    printf("char형 변수의 주소 크기: %d\n", sizeof(&ch));
    printf("int형 변수의 주소 크기: %d\n", sizeof(&in));
    printf("double형 변수의 주소 크기: %d\n", sizeof(&db));

    printf("char * 포인터의 크기 : %d\n", sizeof(pc));
    printf("int * 포인터의 크기 : %d\n", sizeof(pi));
    printf("double * 포인터의 크기 : %d\n", sizeof(pd));

    printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
    printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
    printf("double * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));

    return 0;
}

/*
결과:
char형 변수의 주소 크기: 8 (교과서는 4. 64비트 시스템이라 그런 듯함.)
int형 변수의 주소 크기: 8 (교과서는 4. 64비트 시스템이라 그런 듯함.)
double형 변수의 주소 크기: 8 (교과서는 4. 64비트 시스템이라 그런 듯함.)
char * 포인터의 크기 : 8 (교과서는 4. 64비트 시스템이라 그런 듯함.)
int * 포인터의 크기 : 8 (교과서는 4. 64비트 시스템이라 그런 듯함.)
double * 포인터의 크기 : 8 (교과서는 4. 64비트 시스템이라 그런 듯함.)
char * 포인터가 가리키는 변수의 크기 : 1
int * 포인터가 가리키는 변수의 크기 : 4
double * 포인터가 가리키는 변수의 크기 : 8
*/

/*
포인터는 주소를 저장하는 일정한 크기의 메모리 공간이다. 따라서 언제든지 다른 주소를 저장하거나 포인터끼리 대입할 수 있다.
그러나 일반 변수와는 달리 대입 연산에 엄격한 기준이 적용된다.

#   주소와 포인터의 차이
:
주소는 변수에 할당된 메모리 저장 공간의 시작 주소 값 자체이다. 포인터는 그 값을 저장한느 또 다른 메모리 공간이다.
따라서 특정 변수의 주소값은 바뀌지 않지만 포인터는 다른 주소를 대입하여 그 값을 바꿀 수 있다.
즉, 주소는 상수이고, 포인터는 변수이다.

int a;          // 일반 변수 선언
int *pa, *pb;   // 가리키는 자료형(여기서는 int형)이 같은 두 포인터 선언
pa = pb = &a;   // pa와 pb에 모두 a의 주소를 저장한다. 이 경우 a의 값을 연산하는 데 pa와 pb를 모두 사용할 수 있다.
*pa = 10;       // pa가 가리키는 변수 a에 10 대입
printf("%d", *pb);  //pb가 가리키는 변수 a값 10 출력

주소도 포인터처럼 간접 참조 연산자를 쓸 수 있지만 상수이므로 대입 연산자 왼쪽에 올 수 없다.

#   주소와 포인터의 크기
:
포인터도 저장 공간이므로 크기가 있다. 포인터의 크기는 저장할 주소의 크기에 따라 결정된다.
크기가 클수록 더 넓은 범위의 메모리를 사용할 수 있다. 포인터의 크기는 컴파일러에 따라 다를 수 있으나
모든 주소와 포인터는 가리키는 자료형과 상관없이 그 크기가 같다.

주소와 포인터의 크기는 sizeof 연산자로 확인할 수 있다.

*/