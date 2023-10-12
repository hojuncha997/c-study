#include <stdio.h>

void print_ary(int *pa, int size);

int main(void)
{
    int ary1[5] = {10, 20, 30, 40, 50};
    int ary2[7] = {10, 20, 30, 40, 50, 60, 70};

    print_ary(ary1, 5);
    printf("\n");
    print_ary(ary2, 7);

    return 0;
}

void print_ary(int *pa, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", pa[i]);
    }
}

/*
결과:
10 20 30 40 50
10 20 30 40 50 60 70
*/

/*
함수를 호출할 때 주는 배열 요소의 개수는  sizeof 연산자로 구할 수도 있다.
sizeof 연산자에 배열명을 사용하면 배열 전체의 크기를 계산하므로
이 값을 배열 요소 하나의 크기로 나누어 배열 요소의 개수를 구한다.

print_ary(ary2, 7);는 아래와 같이 작성할 수 있다.
print_ary(ary2, sizeof(ary2) / sizeof(ary2[0]))

주의.
print_ary 함수 내에서 sizeof 연산자로 배열의 크기를 알 수 없다.
sizeof 연산자를 배열명에 사용하면 배열 전체 크기를 구하지만 포인터에 사용하면 포인터 자체의 크기만 계산한다.
포인터가 배열명을 저장한 경우라도 마찬가지이다. 따라서 아래와 같은 연산은 배열 요소의 개수를 알 수 없으므로 무의미하다.

sizeof(pa) / sizeof(pa[0]) ==> 포인터의 크기 / 첫 번째 배열 요소의 크기 ==> 4/4

*/