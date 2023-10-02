#include <stdio.h>
int main(void)
{
    // 3.76시간은 몇 시간, 몇 분, 몇 초인지 출력

    int hour, min, sec;
    double time = 3.76;

    hour = (int)time;
    time -= hour;

    min = (int)(time * 60);
    time = time * 60 - min;

    sec = (int)(time * 60);

    printf("%d\n", hour);
    printf("%d\n", min);
    printf("%d\n", sec);
    printf("3.76시간은 %d시간 %d분 %d초이다.\n", hour, min, sec);
    printf("%.2lf\n", time);
    return 0;
}