#include <stdio.h>

int main(void)
{
    int ch;
    int cnt = 0;
    ch = getchar();

    while (ch != '\n')
    {
        // if (97 <= ch <= 122) 수학적으로는 틀리지 않지만 C문법적으로는 맞지 않다.

        // if ('a' <= ch && ch <= 'z') // 이 표현이 이해에 편리하다. 그러나 이번에는 아래와 같이 조건식 작성.
        if (97 <= ch && ch <= 122) // 조건식 수정
        {
            cnt++;
        }
        ch = getchar();
    }

    printf("소문자의 개수: %d\n", cnt);

    return 0;
}