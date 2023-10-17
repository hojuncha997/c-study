#include <stdio.h>
#include <string.h>

int main(void)
{

    char str[80] = "straw";

    strcat(str, "berry"); // str 배열에 문자열 붙이기
    printf("%s\n", str);

    strncat(str, "piece", 3); // str 배열에 3개의 문자 붙이기
    printf("%s\n", str);

    return 0;
}

/*
결과:
strawberry
strawberrypie
*/

/*
strcat 함수는 배열에 있는 문자열에 문자열을 이어 붙이고, strncat 함수는 지정한 문자의 개수만큼 붙인다.

- strcat 함수는 메모리를 침범할 수 있다. 따라서 붙여넣기가 되는 배열의 크기가 충분히 커야 한다.
- strcat 함수를 사용할 때는 배열을 초기화 해야 한다. 붙여 넣기 전에 먼저 널 문자의 위치를 찾기 때문이다.
배열이 초기화되지 않으면 쓰레기 값의 중간부터 붙여 넣을 가능성이 크다.

p342 참고
*/
