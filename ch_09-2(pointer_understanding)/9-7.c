#include <stdio.h>

// 함수선언
void swap(int *pa, int *pb);

int main(void)
{
    int a = 10, b = 20;

    swap(&a, &b);
    printf("a : %d, b : %d\n ", a, b);
    return 0;
}

void swap(int *pa, int *pb)
{
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

/*
결과:
a : 20, b : 10

포인터로 변수의 주소값을 받으므로써 함수에서 해당 변수 값들을 사용할 수 있다.
*/

/*
변수를 사용하는 가장 쉬운 방법은 이름을 쓰는 것이다.
포인터를 사용하려면 추가적인 변수 선언이 필요하다. 또한 주소 연산, 간접 참조연산 등 각종 연산을 수행해야 한다.
따라서 일부러 사용할 필요는 없다.

그러나 임베디으 프로그래밍을 할 때나 메모리에 직접 접근하는 경우, 동적 할당한 메모리를 사용하는 경우에는 포인터가 필요하다.


*/