#include <stdio.h>

int main(void)
{
    char str[80];
    printf("문자열 입력: ");
    scanf("%s", str);
    printf("첫 번째 단어: %s\n", str);

    scanf("%s", str);
    printf("버퍼에 남아 있는 두 번째 단어: %s\n", str);

    return 0;
}

/*
결과:
문자열 입력: apple jam
첫 번째 단어: apple
버퍼에 남아 있는 두 번째 단어: jam
*/

/*
scanf 함수를 사용한 문자열 입력
:
문자열 상수는 상수이므로 값을 바꿀 수 없다. 바꾸려면 char 배열을 사용해야 한다.
배열에 문자열을 입력하는 방법은 다양하며, 그 중 하는 scanf이다.
scanf 함수는 %s를 사용하여 공백이 없는 연속된 문자들을 입력 받는다.

scanf 함수는 버퍼를 사용하므로 키보드로 입력한 문자열은 엔터를 누를 때 버퍼에 저장된다.
그 후에 scnaf 함수는 버퍼에서 문자열을 가져와 배열에 저장한다. 이 때 중간에 공백, 탭, 개행문자가 있으면
그 이전까지만 저장한다.


apple jam 입력 ==> [a][p][p][l][e][][j][a][m][\n] 버퍼
str 배열에 [a][p][p][l][e][\0]이렇게 저장한다. jam은 여전히 버퍼에 남아 있으며 다음 입력에 사용한다.
두 번째 scanf에서는 버퍼에 문자열이 남아 있으므로 값을 입력받지 않는다.



#   scnaf 함수의 입력 수
:
scnaf 함순느 문자열을 저장할 배열의 크기를 알지 못한다. scanf함수는 주소인 배열명을 인수로 받으므로
오로지 배열의 시작 위치만 알고 있다. 그 주소를 증가시키면 버퍼로부터 가져온 문자열을 배열에 저장한다.
만약 배열의 크기가 큰 문자열을 입력하면 포인터 연산을 통해 할당된 메모리 공간을 넘어서 저장한다. 이 경우
메모리 침범이 발생하므로  비정상 동작을 할 가능성이 크다. 따라서 scanf 함수로 문자열을 입력할 때는
널문자까지 고려하여 배열의 크기를 넘지 않도록 주의해야 한다. 위 코드에서는 널 문자를 제외하고 최디 79자까지 입력 가능하다.






*/