#include <stdio.h>

void fruit(int count);

int main(void)
{
    fruit(1);
    return 0;
}

void fruit(int count)
{
    printf("apple\n");
    if (count == 3)
        return;
    fruit(count + 1);

    printf("jam\n");
}
/*
결과:
apple
apple
apple
jam
jam

어째서 jam이 출력되었을까?
재귀 함수는 최초 호출한 곳이 아니라 이전에 호출한 곳으로 돌아간다.
재귀함수는 하나의 함수에서 코들르 반복 실행하는 것이 아니다.
실제로는 새로운 함수를 실행하는 것이다.

따라서 복사된 fruit 함수가 두 번 더 실행된다.
세 번 째 apple을 출력하고 나면 두 번째 함수의 호출부로 리턴된다.
두 번째 함수의 호출부에서 내려가면 jam이 출력된다. 그러면 두 번째 함수도 종료되고,
첫 번째, 즉 최초 함수의 호출부로 돌아간다. 그리고 그 아래의 jam출력 코드가 실행된다.
따라서 jam이 총 두 번 출력된다.

재귀호출은 실제로는 새로운 함수를 실행하는 것과 같다.
재귀호출은 경우에 따라 복잡한 반복문을 간단히 표현할 수 있으나
코드 이해가 쉽자 않고 반복 호출 시 메모리를 사용하므로 제한적으로 사용하는 것이 좋다.

*/