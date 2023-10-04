#include <stdio.h>
int main(void)
{
    int a = 1;

    do
    {
        a = a * 2;
    } while (a < 10);

    printf("a : %d\n", a);

    return 0;
}
/*
do ~ while문은 반복할 문장을 최소 한 번은 실행한다.
*/