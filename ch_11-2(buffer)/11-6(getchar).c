#include <stdio.h>

void my_gets(char *str, int size);

int main(void)
{
    char str[7]; // 문자열을 저장할 배열
    // printf("%d", sizeof(str)); //  7

    my_gets(str, sizeof(str));          // 한 줄의 문자열을 입력하는 함수
    printf("입력한 문자열: %s\n", str); // 입력한 문자열 출력

    return 0;
}

void my_gets(char *str, int size) // str은 char 배열, size는 배열의 크기
{
    int ch;    // getchar 함수의 반환값을 저장할 변수
    int i = 0; // str 배열의 첨자

    ch = getchar(); // 첫 번째 문자 입력. 이 때 한 줄의 데이터를 모두 입력하여 버퍼에 저장한다.
    // 이후 getchar 함수를 반복 사용하여 버퍼로부터 문자를 하나씩 가져와 배열에 차례로 저장한다.

    while ((ch != '\n') && (i < size - 1))
    {
        str[i] = ch;    // 입력한 문자를 배열에 저장
        i++;            // 첨자 증가
        ch = getchar(); // 새로운 문자 입력
    }

    str[i] = '\0'; // 입력된 문자열의 끝에 널 문자 저장
}

/*
결과1:
a boy
입력한 문자열: a boy

결과2:
Be happy!
입력한 문자열: Be hap
*/

/*
위 코드는 getchar 함수를 이용하여 키보드로 입력한 한 줄의 문자열을 char 배열로 저장한다.
단, 배열의 크기를 넘는 문자열을 입력한 경우도 배열의 크기만큼만 입력하도록 작성하여
할당되지 않은 메모리를 침범하지 않도록 작성한다. 또한 크기가 다른 배열에도 사용할 수 있도록
함수로 만든다.

get

*/