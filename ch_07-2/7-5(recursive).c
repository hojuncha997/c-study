#include <stdio.h>

void fruit(void);

int main(void)
{
    fruit();
    return 0;
}

void fruit(void)
{
    printf("apple\n");
    fruit(); // 자신 안에서 자신을 호출한다.
}

/*
결과:

apple
apple
apple
...

계속해서 apple이 출력되다가 프래그램이 종료된다.
프로그램 하나가 쓸 수 있는 메모리 (해당 프로세스에 할당된 스택 메로리)를 모두 사용하였기 때문이다.

이것은 정상적인 종료가 아니다. 재귀호출 함수는 반드시 반복을 끊는 조건식을 포함하고 있어야 한다.
*/