#include <stdio.h>

void swap(int x, int y);

int main(void)
{
    int a = 10, b = 20;
    swap(a, b);

    printf("a: %d, b: %d\n ", a, b);

    return 0;
}

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

/*
결과:
a: 10, b: 20

바뀌지 않았다. a,b 값은 x,y 복사됐을 뿐이다.
swap함수에서 바꾼 값을 main함수로 전달하면 좋겠지만 함수는 오직 하나의 값만 반환하므로 불가능하다.
*/