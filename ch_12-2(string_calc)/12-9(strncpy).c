
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20] = "mango tree"; // 배열 초기화

    strncpy(str, "apple-pie", 5); //"apple-pie"에서 다섯 문자만 복사

    printf("%s\n", str); // 출력

    return 0;
}

/*
결과:
apple tree

*/

/*
strncpy 함수는 복사할 문자열에서 지정한 개수만큼 문자를 복사하고 널 문자는 저장하지 않는다.
str배열이 문자열 "apple" 로만 쓰이도록 하려면 apple을 복사한 수에 널 문자를 별도로 저장하면 된다.
str[5] = '\0';
*/