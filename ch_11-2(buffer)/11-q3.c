#include <stdio.h>

int main(void)
{
    char ch;
    int wordLength = 0; // 현재 단어의 길이
    int maxLength = 0;  // 가장 긴 단어의 길이

    while (1)
    {
        if (scanf("%c", &ch) == EOF) // EOF 검사를 여기로 옮깁니다.
        {
            break;
        }

        if (ch == '\n')
        {
            if (maxLength < wordLength)
            {
                maxLength = wordLength;
            }
            wordLength = 0; // 단어 길이 초기화
        }
        else
        {
            wordLength++;
        }
    }

    // 마지막 단어의 길이 검사를 위한 로직 추가
    if (maxLength < wordLength)
    {
        maxLength = wordLength;
    }

    printf("가장 긴 단어의 길이: %d", maxLength);

    return 0;
}

/*
키보드로 입력한 단어 중에서 길이가 가장 긴 단어의 길이를 출력
*/