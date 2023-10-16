#include <stdio.h>
#include <string.h> //strlen 함수를 사용하기 위해 추가(결과2)

int main(void)
{
    char str[80];
    printf("공백이 포함된 문자열 입력: ");
    fgets(str, sizeof(str), stdin);             // 문자열 입력 ==> fgets(배열명, 배열의 크기확인, 표준입력)
    str[strlen(str) - 1] = '\0';                // 개행문자 제거를 위해 추가(결과2)
    printf("입력된 문자열은 %s입니다.\n", str); // 문자열 출력
    return 0;
}

/*
결과1:
공백이 포함된 문자열 입력: apple jam
입력된 문자열은 apple jam
입니다.

결과2:
공백이 포함된 문자열 입력: apple jam
입력된 문자열은 apple jam입니다.
*/

/*
fgets는 문자열을 저장할 배열명 외에 배열의 크기와 표준 입력 버퍼를 뜻하는 stdin을 함께 사용한다.
첫 번째 인수는 배열명이다. 두 번째 인수는 배열의 크기를 알려주므로 입력이 커도 그 크기까지만 저장된다.
입력한 문자열의 끝에는 항사아 널 문자를 붙이므로 최대로 '배열의 크기 -1개'의 문자만 저장한다.
예를 들어 배열의 크기가 5라면 str배열에는 apple까지만 저장한다.
[a][p][p][l][e][\0]

세 번째 인수로 사용하나 stdin은 데이터를 입력할 때 키보드와 연결된 표준 입력 버퍼를 사용하라는 뜻이다.
scanf 와 gets는 기본적으로 표준입력을 이용하지만 fgets는 입력버퍼를 선택할 수 있는 함수이므로
키보드를 입력할 때는 항상 stdin을 사용해야 한다.

fgets함수가 문자열을 입력하는 방식은 gets함수와 거의 같으나 개행문자의 처리 방식이 다르다.

fgets는 버퍼에 있는 개행문자도 배열에 저장하고 널 문자을 붙여 문자열을 완성한다.
버퍼[a][p][p][l][e][][j][a][m][\n] ==> str배열[a][p][p][l][e][][j][a][m][\n][\0]

개행무자 제거가 필요한 경우, 입력된 개행 문자는 아래 공식에 따라 제거한다.
str[strlen(str) - 1] = '\0';

즉, 개행 문자가 저장된 곳의 위치를 찾아서 널 문자를 대입해버린다.
strlen 함수는 배열명을 인수로 받아 널 문자 이전까지의 문자 수를 세어 반환한다.

위에서는 아의 코드를 추가함으로써 확인해 볼 수 있다.
#include <string.h>
str[strlen(str) - 1] = '\0';



*/