#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[80] = "pear";
    char str2[80] = "peach";

    printf("사전에 나중에 나오는 과일 이름: ");

    if (strcmp(str1, str2) > 0) // str1이 사전에 나중에 나온다면
    {
        printf("%s\n", str1);
    }
    else
    {
        printf("%s\n", str2);
    }

    return 0;
}

/*
결과:
사전에 나중에 나오는 과일 이름: pear
*/

/*
strcmp 함수는 두 문자열에서 우선 첫 문자의 아스키 코드 값을 비교한다.
첫 문자 값이 같으면 그 다음 문자로 넘어가 비교한다. 끝까지 같으면 같은 문자열이다.
값이 true인 경우 1, false인 경우 -1을 반환한다.

strncmp는 strcmp 함수와 거의 같지만 비교할 문자 수를 지정할 수 있다.
만약 같으면 0을 반환한다.

if(strncmp(str1, str2, 3) == 0 )
    printf("같다.\n");
else
    printf("다르다.\n");


#주의#

strcmp 함수의 반환값이 항상 사전 순서를 의미하는 것은 아니다.
- strcmp 함수가 문자의 아스키 코드 값을 비교하므로 대소문자가 섞인 경우는 반환값이 사전 순서와 다를 수 있다.
- 따라서 대소문자 혼합, 숫자, 특문이 포함된 경우도 아스키 값을 비교하므로 주의해야 한다.
- 한글은 2바이트로 구현하므로 1바이트를 사용하는 어떤 값보다 크다.



*/