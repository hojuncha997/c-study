#include <stdio.h>

int main(void)
{
    char ch;
    int i;

    for (i = 0; i < 3; i++)
    {
        scanf("%c", &ch);
        printf("%c", ch);
    }

    return 0;
}
/*
결과:
tiger (입력)
tig
*/

/*
scanf나 getchar 같은 표준 함수들은 키보드로부터 데이터를 입력할 때 버퍼를 거쳐 입력한다.
버퍼는 프로그램에서 직접 할당하는 것이 아니고 프로그램을 실행하는 중에
운영체제가 자동으로 할당하는 메모리의 저장 공간이다.

** 키보드로 입력하는 데이터는 일단 !버퍼에 저장된 후에! scanf 함수에 의해 변수에 입력된다. **
즉 키보드 입력이 바로 scanf함수에 인자로 전달되는 것이 아니다. 버퍼에서 scanf함수에 전달되는 것이다.

#   scanf 함수가 문자를 입력하는 과정
:
버퍼는 데이터를 보관하는 역할을 하므로 최초 입력할 때 필요한 데이터를 한꺼번에 저장해놓으면
scanf 함수는 호출 즉시 버퍼에서 데이터를 가져올 수 있다.

위 예제는 문자를 입력하고 화면에 출력하는 과정을 세 번 반복한다. 그러나 실행결과는 한 번의
키보드 입력(tiger)으로 끝난다. 최초 scanf 함수가 호출될 때 키보드로 문자열을 입력하면,
일단 버퍼에 저장한 후에 첫 번째 문자만 변수에 저장한다.
두 번째 함수 호출부터는 버퍼에 남아 있는 문자열에서 차례로 문자를 가져오므로 결국 새로운 키보드 입력이 필요 없다.
물론 scanf 함수가 버퍼에 저장된 데이터를 모두 가져온다면 키보드에서
추가로 데이터를 입력해야 한다.

위 코드에서 tiger를 입력하면  버퍼는 다음과 같다.

[t][i][g][e][r][\n]

입력데이터는 엔터를 누르는 순간 버퍼에 저장되며 개행 문자도 함께 저장된다. 따라서 버퍼에 있는 개행문자도
하나의 데이터로 입력될 수 있으며 이를 통한 프로그래밍도 가능하다.(반복문에서 빠져 나올 때 사용하는 등)

# 입출력 함수가 버퍼를 사용하는 것의 장점.
:
1. 데이터를 안정적으로 입력받을 수 있다. 버퍼는 운영체제에 따라 크기가 다를 수 있지만 일정 크기의 연속된 저장공간이다.
따라서 데이터르 입력하면 먼저 버퍼에 저장된다. 프로그램이 다른 일을 하느라 즉시 입력받지 못해도 데이터가 사라지지 않는다.

2. 입력 장치와 독립적으로 사용할 수 있다. scanf 함수는 키보드와 직접 연결되지 않고 정해진 크기와 형태를 가진 버퍼에서
입력 받는다. 따라서 입력장치가 바뀌더라도 함수를 수정하지 않고 사용할 수 있다. 버퍼와 입력장치를 연결하는 작업은
운영체제가 담당한다.



*/