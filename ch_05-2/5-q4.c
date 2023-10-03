#include <stdio.h>
int main(void)
{
    int age = 25, chest = 95;
    char size;

    if (age < 20)
    {
        if (chest < 85)
        {
            size = 'S';
        }
        // else if (95 > chest >= 85) 틀린 표현이다. c에서는 두 부분으로 나누어 작성해야 한다.
        else if (chest < 95 && chest >= 85)
        {
            size = 'M';
        }
        else
        {
            size = 'L';
        }
    }
    else
    {
        if (chest < 95)
        {
            size = 'S';
        }
        // else if (100 > chest >= 90)
        else if (chest >= 90 && chest < 100)
        {
            // printf("%d\n", size); 여기서는 아직 size변수에 값이 할당되지 않았으므로 0이 출력됨.
            size = 'M';
            printf("%c\n", size);
            printf("%d\n", size);
        }
        else
        {
            size = 'L';
        }
    }

    printf("사이즈는 %c 입니다.\n", size);

    return 0;
}