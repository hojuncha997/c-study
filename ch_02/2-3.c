#include <stdio.h>

int main(void)
{
    // \n은 줄바꿈을 의미한다.
    printf("Be happy\n");

    // \t는 탭을 의미한다.
    printf("My\tfriend\n");

    // \b는 백스페이스를 의미한다. 왼쪽으로 한 칸 이동한다.
    printf("goot\bd\tchance\n");

    // \r은 캐리지 리턴을 의미한다. 커서를 가장 앞으로 이동한다.
    printf("Cow\rW\a\n");
    printf("Cow\rW\7\n");

    // \a는 벨(Bell)을 의미한다. 소리가 난다. 소리가 나지 않는 경우가 있다.
    // 이 경우에는 \a 대신 \7을 사용하면 된다.
    // \7은 ASCII 코드 7번에 해당하는 벨(Bell) 문자이다.

    return 0;
}