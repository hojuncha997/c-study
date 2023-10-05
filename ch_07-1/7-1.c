#include <stdio.h>

int sum(int x, int y); // sum함수 선언

int main(void)
{
    int a = 10, b = 20;
    int result;

    result = sum(a, b);
    printf("result : %d\n", result);

    return 0;
}

int sum(int x, int y) // 함수 정의
{
    int temp;
    temp = x + y;
    return temp;
    // return (x+y);
}

/*
    표준 라이브러리 함수
    : 특정 기능을 미리 약속하고 미프로그램에서 바로 사용할 수 있게 구현되어 있는 함수를
    표준라이브러리 함수라고 한다. 앞선 예제에서 사용했던 모든 함수는 stdio.h 헤더 파일에 포함돼 있다.

    함수 정의
    :
        반환형 함수명(매개변수1, 매개변수2)
        {
            //수행문. 결괏값
        }

    함수를 정의할 때는 다른 함수 안에서 정의할 수 없다. 다라서 sum함수는 main함수 밖에서 정의한다.
    함수를 만들 때는 함수 원형을 먼저 작성한다.

    함수 호출
    : 함수를 호출할 때는 인수(argument)를 입력해야 할 수도 있다. 이러한 인수의 값은 호출된 함수의
    매개변수(parameter)에 복사되어 사용된다.
        컴파일러는 함수를 호출할 때 반환값을 저장할 공간을 미리 준비해 놓는다. 이 공간은 컴파일러가
    별도로 확보하는 공간이며 식별할 수 있는 이름이 없으므로 계속 사용할 수는 없다. 대신에 저장된 반환값을
    대입 연산으로 다른 변수에 복사하거나 수식에 바로 사용하는 것은 가능하다.


    함수 선언
    : 함수 선언은 컴파일러가 새로 만든 함수를 인식할 수 있도록 알리는 역할을 한다.
    int sum(int x, int y); 가 이 예제에서의 함수 선언이었다.

    그저 함수 원형에 세미콜론을 붙였을 뿐이다. 함수 선언은 main함수 앞에 위치하며, 아래와 같이 매개변수 이름은 생략가능하다.
    int sum(int, int);

    함수 선언의 목적은 컴파일러에게 반환값을 알려주는 것이다.컴파일러는 반환값을 확인하고 같은 형태의 저장공간을 준비한다.
    반환값이 정수이면 int형 공간을 확보하고 실수를 반환하면 double형 공간을 확보한다. 따라서 함수를 호출하기 전에
    선언을 통해 반환형을 미리 컴파일러에 알릴 필요가 있다. 물론 함수 정의에서도 반환형을 확인할 수 있으므로
    함수 호출 이전에 함수를 정의하는 방법도 있다.

    ## 함수 정의가 있는데도 함수 선언을 사용하는 이유 ##
    함수를 미리 선언하지 않으면 항상 호출하는 함수 앞에 정의해야 한다. 이 때 여러 함수 간에 관계가 엉켜 있으면
    순서에 맞게 정의하는 일이 쉽지 않다.
        따라서 필요한 함수를 main함수 밑에 차례로 만들고, main함수 앞에는 모든 함수를 선언하여 함수의 종류와 원형을
    한눈에 파악하고 자유롭게 호출할 수 있도록 작성하는 것이 좋다. 또한 분할 컴파일하는 프로그램에서 호출하는 함수와 호출되는
    함수가 서로 다른 파일에 있으면 반드시 선언이 필요하다.


    ## 함수 호출에 앞서 함수가 정의, 선언되지 않았어도 함수를 호출할 수 있다.##
    : 그러나 이 경우 컴파일러는 호출 함수의 반환형을 int형으로 간주한다. 따라서 정의된 함수의 반환형이
    int인 경우 컴파일이 되지만, 나중에 반환형을 다른 자료형으로 수정하면 컴파일 에러가 발생할 수 있다.
*/