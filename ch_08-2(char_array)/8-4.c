#include <stdio.h>
int main(void)
{

    printf("%d", sizeof(char));
    char str[80] = "applejam";
    // char str[80] = {'a','p','p','l','e'};  다른 배열들처럼 이렇게도 초기화가 가능하다.

    printf("최초 문자열 : %s\n", str);
    printf("문자열 입력 : ");
    scanf("%s", str);
    printf("입력 후 문자열 : %s\n", str);

    return 0;
}

/*
단어를 컴퓨터에서 데이터로 처리하려면 메모리에 문자를 순서에 맞게 연속으로 저장해야 한다.
결국 배열이 가장 좋은 방법이다. 알파벳 문자는 1바이트로 충분히 표현될 수 있으니 char 배열을 사용하는 것이 좋다.



# char형 배열의 선언과 초기화
: char형 배열을 선언할 때 기억해야 할 것은 저장할 문자열의 길이보다 최소한 하나 이상 크게 배열을 선언하는 것이다.
이는 null문자(\0)를 저장하기 위해서이다.

# null문자의 용도
: 초기화한 문자들은 배열의 처음부터 차례로 저장되어 문자열을 만든다.
이 때 남는 배열 요소에는 자동으로 0이 저장된다. 이렇게 char형 배열에 저장된 0을 특별히 null character라고 한다.
모든 문자는 아스키 코드 값으로 저장되므로 결국 null문자는 아스키 코드 값인 0인 문자를 말하며,
문자 상수로는 \0으로 표현된다.
[a][p][p][l][e][\0][\0][\0][\0]...
    printf 함수는 char 형 배열에서 null 문자가 나올 때가지만 출력하도록 만들어졌다.
이러한 규칙은 문자열을 처리하는 모든 함수에 적용된다.

scanf("%s", str);
여기서 grape를 입력하면 str배열의 값은 grapejam이 되어야 한다. 그러나 출력값은 grape이다.
이는 scanf함수가 사용자가 입력한 값 다음에 null문자를 추가하기 때문이다.


# char형 배열 선언 시 초기화하지 않은 경우
: char형 배열을 초기화 하지 않은 경우에 배열 요소에 문자를 대입한다면,
반드시 마지막 문자 다음에는 null 문자를 대입해야 한다.

char str[80];
str[0] = 'a';
str[1] = 'p';
str[2] = 'p';
str[3] = 'l';
str[4] = 'e';
str[5] = '\0';


# char형 배열 선언 시 주의할 점:
1. 배열의 크기는 충분히 확보할 것.
2. 배열요소의 개수는 최소한 문자열 길이 + 1 이어야 한다.


*/