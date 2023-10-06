#include <stdio.h>

void sum(int);

int main(void)
{
    sum(10);
    sum(100);
    return 0;
}

void sum(int no)
{
    // int result; 초기화 하지 않으면 쓰레기값 사용됨
    int result = 0;

    for (int i = 1; i <= no; i++)
    {
        result += i;
    }

    printf("1부터 %d까지의 합은 %d이다.\n", no, result);
}