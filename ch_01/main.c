#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Be happy!");

    // 아래 명령어의 의미는 "일시정지"이다.
    // system()는 stdlib.h에 선언되어 있다.
    // stdlib.h는 C 표준 라이브러리의 일부이다.
    // system()은 시스템 명령어를 실행하는 함수이다.
    // system()의 인자로 전달된 명령어는 시스템에 따라 다르다.
    // 윈도우에서는 pause, 리눅스에서는 read이다.
    // pause는 윈도우에서 표준으로 제공되는 명령어이다.
    // read는 리눅스에서 표준으로 제공되는 명령어이다.
    // pause와 read는 모두 표준 입력(stdin)으로부터 입력을 받을 때까지 프로그램을 일시정지한다.

    system("pause");

    return 0;
}
