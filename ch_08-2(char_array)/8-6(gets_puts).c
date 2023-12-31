#include <stdio.h>
int main(void)
{
    char str[80];

    printf("문자열 입력 : ");

    gets(str); // 빈칸을 포함한 문자열 입력

    puts("입력된 문자열 : "); // 문자열 상수 출력

    puts(str); // 배열에 저장된 문자열 출력

    return 0;
}

/*
# 문자열 전용 입출력 함수: gets, puts

# gets함수

: char형 배열에 문자열을 대입하는 일은 strcpy 함수가 수행한다. 그러나 중간에 빈칸이 있는 경우 그 전까지만 입력한다.
따라서 빈칸을 포함한 새로운 문자열 입력 방식이 필요하다. 그것이 gets 함수이다.
    gets 함수는 빈칸(탭 포함)을 포함하여 엔터를 누르기 전까지의 한 줄 전체를 문자열로 입력한다.
주의할 점은 gets 함수가 배열의 크기를 검사하지 않는다는 것이다. 배열의 크기보다 긴 문자열을 입력하면
배열을 벗어난 메모리 영역을 침범할 가능성이 있다. 따라서 항상 배열의 크기를 고려해야 한다.
이 문제는 scanf와 strcpy함수에도 해당된다.

# puts함수

:puts함수는 문자열 상수나 char형 배열의 배열명을 주면 문자열을 화면에 출력한다.
printf 함수의 문자열 출력 기능과 같다. 단, 문자열을 출력한 후에 자동으로 줄을 바꾸는 차이가 있다.
따라서 문자열을 출력한 후에 바로 이어서 입력하는 것은 불가능하다.




*/