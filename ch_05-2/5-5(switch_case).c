#include <stdio.h>
int main(void)
{
    int rank = 2, m = 0;

    switch (rank) // rank의 값을 확인
    {
    case 1: // rank의 값이 1인 경우
        m = 300;
        break; // 블록을 벗어남.
    case 2:    // rank의 값이 2인 경우
        m = 200;
        break;
    case 3: // rank의 값이 3인 경우
        m = 100;
        break;
    default: // rank와 일치하는 case의 값이 없는 경우
        m = 10;
        break;
    }

    printf("m: %d\n", m);

    return 0;
}

/*
여러 개의 상수 중에서 조건에 해당하는 하나를 골라 실행하는 것이 switch ~ case 문이다.

    - 조건식은 정수식만 사용해야 한다.

    - 기본적으로 case는 break를 포함한다. break는 해당 블록을 탈출하는 데 사용한다.
        switch문에서는 switch문을 나갈 때 사용된다.

    - default는 상수식을 쓰지 않으며 생략할 수도 있다. default를 생략한 경우,
        rank와 일치하는 case의 상수가 없으면 바로 블록을 벗어나므로 블록 내의 어떤 문장도 실행되지 않는다.

    - case와 default는 건너뛸 위치를 표시하는 label의 역할을 한다.

    - break는 생략할 수 있다. 필요에 따라 전부 또는 일부 생략 가능하다.
        특정 case로 이동한 뒤 break가 없으면 그 다음 case로 이동하며, break가 나타날 때까지 반복된다.

    - 관례상 default 레이블을 모든 case 레이블의 뒤에 배치한다. 그러나 사실 switch문 안에 있다면 위치와 무관히 동작한다.

switch~case문은 if문으로 바꾸어 같은 결과를 얻을 수 있다.
따라서 실행결과가 같다면 어떤 구문을 사용할 것인지는 선택의 문제이다.
다만 switch~case문은 정수값에 따라 실행 문장을 선택하기에 좋은 구조이며 범위를 검사하는 경우에는 적합하지 않다.



*/