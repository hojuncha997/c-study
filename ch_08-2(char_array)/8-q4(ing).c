#include <stdio.h>
// 키보드로부터 문장을 입력받은 후에 대문자를 찾아 소문자로 바꾸는 프로그램
int main(void)
{
    char arr[80];

    printf("문장 입력 : ");
    gets(arr);
    int count = 0;

    for (int i = 0; i < sizeof(arr) / sizeof(char); i++)
    {
        if (arr[i] > 65)
        {
            break;
        }

        if (arr[i] == '\0')
        {
            break;
        }
    }

    return 0;
}

#include <stdio.h>
// 키보드로부터 문장을 입력받은 후에 대문자를 찾아 소문자로 바꾸는 프로그램

int main(void)
{
    char arr[80];

    printf("문장 입력 : ");

    // gets(arr);
    // 배열의 크기를 확인하여 버퍼 오버플로우를 방지합니다.
    fgets(arr, sizeof(arr), stdin);

    for (int i = 0; arr[i] != '\0'; i++)
    {
        // 대문자 확인
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            // 대문자를 소문자로 변환
            arr[i] = arr[i] + 32;
        }
    }

    printf("변환된 문장 : %s\n", arr);

    return 0;
}
