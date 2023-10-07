#include <stdio.h>
int main(void)
{

    int score[5];
    int i;
    int total = 0;
    double avg;

    // 점수 입력
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &score[i]);
    }

    // 점수 합산
    for (i = 0; i < 5; i++)
    {
        total += score[i];
    }
    avg = total / 5.0;

    // 성적 출력
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", score[i]);
    }

    // 평균 출력
    printf("평균: %.1lf\n", avg);

    return 0;
}