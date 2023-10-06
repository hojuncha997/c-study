#include <stdio.h>

int rec_func(int n);

int main(void)
{
    printf("값을 입력: ");
    int a;
    scanf("%d", &a);

    int result = rec_func(a);
    printf("1부터 %d까지의 합은 %d입니다.\n", a, result);

    return 0;
}

int rec_func(int n)
{
    if (n <= 0)
    {
        // 0 이하의 수가 입력되면, 재귀를 종료하고 0을 반환합니다.
        return 0;
    }
    else
    {
        // n이 1 이상이면, 현재의 n과 n-1 까지의 합을 재귀적으로 호출하여 더합니다.
        return n + rec_func(n - 1);
    }
}
