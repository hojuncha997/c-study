#include <stdio.h>
int main(void)
{
    int score[5];

    int i;
    int total = 0;
    double avg;
    int count;

    count = sizeof(score) / sizeof(score[0]); // 배열 요소의 개수 계산. 동적으로 사용하기 위해

    // 점수 입력
    for (i = 0; i < count; i++)
    {
        scanf("%d", &score[i]);
    }

    // 점수 합산
    for (i = 0; i < count; i++)
    {
        total += score[i];
    }
    avg = total / (double)count; // total과 count가 모두 int형이므로 double로 캐스팅하였다.

    // 성적 출력
    for (i = 0; i < count; i++)
    {
        printf("%d\n", score[i]);
    }
    printf("\n");

    printf("평균: %.1lf\n", avg);

    return 0;
}

/*
배열은 보통 많은 양의 데이터를 처리하므로 반복문 사용이 필수적이다.
따라서 배열 요소의 개수가 바뀌면 배열을 처리하는 반복문을 모두 수정해야 하는 부담이 있다.
이 경우 배열 요소의 개수를 직접 계산하여 반복문에 사용하는 방법이 있다.

sizeof(배열명) / sizeof(배열 요소)


위 코드에서는 배열 요소 하나의 크기로 배열크기를 나누어 배열 요소의 개수를 구했다.
*/