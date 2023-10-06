#include <stdio.h>
// 반환값이 없는 함수 선언.
// 반환형이 void인 경우 컴파일러는 반환값이 없다고 가정하여 호출한 위치에 저장공간을 준비하지 않는다.
void print_char(char ch, int count);

int main(void)
{
    print_char('@', 5);
    return 0;
}

// 함수 정의
void print_char(char ch, int count)
{
    int i;

    if (count > 10)
        return; // 여기서 return 하면 함수의 실행을 종료한다.

    for (i = 0; i < count; i++)
    {
        printf("%c", ch);
    }

    return; // 적어주지 않아도 정상 작동한다.
}