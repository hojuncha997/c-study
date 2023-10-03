#include <stdio.h>
int main(void)
{
    double height = 179.5;
    double weight = 75.0;

    if ((height >= 180) && (weight < 80))
    {
        printf("ok\n");
    }
    else
    {
        printf("cancel\n");
    }

    return 0;
}

/*
키가 187.5cm 이상이고 몸무에가 80.0kg 미만이면 ok를 출력하고 그 이외의 경우에는 cancel을 출력
키는 179.5, 몸무게는 75.0
*/