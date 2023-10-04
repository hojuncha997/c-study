#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;

    for (i = 1; i <= 10; i++)
    {
        sum += i;
        if (sum > 30)
            break;
    }
    printf("누적한 값 : %d\n", sum);
    printf("마지막으로 더한 값 값 : %d\n", i);

    int jsum;
    for (int j = 0; j < 100; j++)
    {
        if ((j % 3) == 0)
        {
            continue;
        }
        jsum += j;
    }

    printf("sum of j: %d", jsum);

    return 0;
}

/*
break는 반복문 안에서 반복을 즉시 끝낼 때 사용한다.
break는 자신을 포함하는 반복문을 하나만 벗어난다.

continue는 반복문의 일부를 건너 뛴다.
반복문 안에서 continue를 사용하면 다음 실행위치가 반복문의 블록 끝이 된다.블록을 탈출하는 것은 아니다.
*/