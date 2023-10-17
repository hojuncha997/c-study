#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[80], str2[80];
    char *resp;

    printf("2개의 과일 이름 입력: ");
    scanf("%s%s", str1, str2);

    if (strlen(str1) > strlen(str2))
    {
        resp = str1;
    }
    else
    {
        resp = str2;
    }
    printf("이름이 긴 과일은 : %s\n", resp);

    return 0;
}

/*
결과:
2개의 과일 이름 입력: banana strawberry
이름이 긴 과일은 : strawberry
*/

/*

배열에 저장된 문자열의 실제 크기를 알고 싶은 경우 strlen 함수를 사용한다.
* 배열의 크기와 배열의 문자열의 크기는 다를 확률이 높다.

strlen 함수는 배열에 저장된 문자열에서 널 문자가 나올 때까지 문자 수를 세어 반환한다.

sizeof와 strlen 함수를 혼동하지 않도로 주의해야 한다.
 sizeof는 배열의 전체 크기를 계산한다.

 char str[80] = "apple";
 printf("%d", sizeof(str)); // 80
 printf("%d", strlen(str)); // 5


*/