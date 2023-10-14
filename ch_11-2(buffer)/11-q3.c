#include <stdio.h>

int main(void)
{
    char ch;
    int wordLength = 0; // 현재 단어의 길이
    int maxLength = 0;  // 가장 긴 단어의 길이

    while (1)
    {
        scanf("%c", &ch);
        if (ch == '\n')
        {
            if (maxLength < wordLength)
            {
                maxLength = wordLength;
            }
        }
        else if (ch == -1)
        {
            break;
        }
    }

    printf("가장 긴 단어의 길이: %d", maxLength);

    return 0;
}

/*
키보드로 입력한 단어 중에서 길이가 가장 긴 단어의 길이를 출력
*/