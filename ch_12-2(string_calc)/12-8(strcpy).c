#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[80] = "strawberry"; // char배열에 문자열 초기화
    char str2[80] = "apple";      // char배열에 문자열 초기화
    char *ps1 = "banana";         // 포인터로 문자열 상수 연결
    char *ps2 = str2;             // 포인터로 배열 연결

    printf("최초 문자열: %s\n", str1);
    strcpy(str1, str2); // 다른 char 배열의 문자열 복사
    printf("바뀐 문자열: %s\n", str1);

    strcpy(str1, ps1); //
    printf("바뀐 문자열: %s\n", str1);

    strcpy(str1, ps2);
    printf("바뀐 문자열: %s\n", str1);

    strcpy(str1, "banana");
    printf("바뀐 문자열: %s\n", str1);

    return 0;
}

/*
결과:
최초 문자열: strawberry
바뀐 문자열: apple
바뀐 문자열: banana
바뀐 문자열: apple
바뀐 문자열: banana
*/

/*
더하기로 연산자로 문자열을 더할 수는 없다.
이렇게 문자열로 연산할 때는 문자열 연산에 사용하는 함수를 따로 사용해야 한다.


#   문자열을 대입하는  strcpy 함수
:
char 배열은 문자열을 저장하는 변수의 역할을 하며 쉽게 문자열로 초기화할 수 있다.
그러나 다른 문자열로 바꾸는 것은 문자를 하나씩 옮기는 번거로운 일을 수행해야 한다.

예를 들어 문자열 "strawberry"가 저장된 배열을 "apple"로 바꾸려면 아래와 같이 문자를 하나씩 대입해야 한다.

char str1[80] = "strawberry";
str1[0] = 'a'
str1[1] = 'p'
str1[2] = 'p'
str1[3] = 'l'
str1[4] = 'e'
str1[5] = '\0'

이렇게 하나씩 대입하는 방법 외에 문자열을 한 번에 대입하는 방법도 있다.
그것이 strcpy 함수를 이용하는 방법이다. 이런 함수를 문자열 연산 함수라고 하며,
string.h 헤더파일을 include 해야 한다. strcpy 함순느 string copy, 즉 문자열 복사의 약어이다.

strcpy(str1, str2)

str1: 복사 받을 곳
str2: 복사할 내용

strcpy함수는 char 배열에 문자열을 복사하는 대입 연산 기능을 수행한다.
문자열을 복사하는 방식은 문자열의 첫 번째 문자부터 널 문자가 나올 때까지 문자를 하나씩 배열에 옮겨 저장한다.
따라서 복사할 문자열의 시작 위치를 알 수 있따면 어떤 것이든 두 번째 인수로 사용할 수 있다.

두 번째 인수는 다양한 값을 사용할 수 있지만 첫 번째 인수로 사용할 수 있는 값은 제한적이다.
첫 번째 인수는 char 배열이나 그 배열명을 저장한 포인터만 가능하다. 문자열 상수는 값을 바꿀 수 없으므로
첫 번째 인수로 사용하면 에러가 발생한다. 문자열 상수를 연결하고 있는 포인터를 사용하는 것도 마찬가지이다.

strcpy("banana", "apple") : 상수이므로 바뀌지 않음. 따라서 사용 X
strcpy(ps1, "apple"): ps1dl 연결하고 있는 문자열 상수가 바뀜. 따라서 사용 X






*/