#include <stdio.h>

void fruit(int count);

int main(void)
{
    fruit(1); // 처음 호출하므로 1을 인수로 제공
    return 0;
}

void fruit(int count)
{
    printf("apple\n");
    if (count == 3)
        return;

    fruit(count + 1); // count가 1 올라가고 apple이 한 번 더 출력됨.

    /*
    fruit(count++);가 호출되면, 현재 count 값이 함수에 전달되고, 함수 호출이 끝난 후에 count 값이 증가한다.
    함수 인자는 call by value이기 때문에, count의 증가는 fruit 함수의 새로운 호출에 영향을 주지 않는다.
    이로 인해 count 값이 변하지 않아 count == 3이라는 조건을 만족시키지 못하고, 함수가 무한히 재귀 호출되면서 "apple"이 계속 출력.
    fruit(count++);의 호출 시퀀스는 fruit(1), fruit(1), fruit(1), ...로 진행됨. 따라서 무한출력.
    fruit(++count);은 가능

    Call by value"는 함수 호출 방식 중 하나로, 함수에 인자를 전달할 때 인자의 값을 전달하는 방식을 의미한다.
    이는 원래 변수의 값을 복사하여 함수에 전달하므로,
    함수 내에서 인자의 값이 변경되더라도 원래 변수의 값에는 영향을 주지 않는다.

    이와 대조적으로 "call by reference"는 변수의 참조(주소)를 전달하여,
    함수 내에서 인자 값이 변경되면 원래 변수의 값도 변경되게 한다.
    C 언어에서는 이를 포인터를 사용하여 구현할 수 있다.


    */
}