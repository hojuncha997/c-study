#include <stdio.h>
int main(void)
{
    int ary[3];
    int *pa = ary;
    int i;

    *pa = 10;
    *(pa + 1) = 20;

    pa[2] = pa[0] + pa[1];

    for (i = 0; i < 3; i++)
    {
        printf("%5d", pa[i]);
    }

    return 0;
}

/*
결과:
   10   20   30


배열명 역할을 하는 포인터
:
배열명은 주소이므로 포인터에 저장할 수 있다. 이 경우 포인터로 연산식이나 대괄호를 써서 배열 요소를 쉽게 사용할 수 있다.

*/