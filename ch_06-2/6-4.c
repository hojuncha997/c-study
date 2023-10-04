#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/*
중첩 반복문에서는 각 반복문이 서로 독립적인 제어 변수를 사용해야 각각 원하는 횟수를 반복할 수 있다.

*/