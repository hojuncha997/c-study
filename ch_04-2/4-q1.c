#include <stdio.h>
int main(void)
{
    // short형과 long형의 자료형의 크기를 비교하여 큰 자료형을 출력

    int res;

    res = sizeof(short);
    printf("res == %d\n", res);

    (res == 1) ? printf("short") : printf("long");

    return 0;
}