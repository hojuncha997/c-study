#include <stdio.h>
int main(void)
{
    char ch1, ch2;

    scanf("%c%c", &ch1, &ch2);
    printf("[%c%c]\n", ch1, ch2); // 제어문자를 %c로 출력하면 제어 문자의 기능을 수행하므로 존재를 느끼기 어렵다.
    // 그럴 때는 아스키 코드 값을 출력하면 입력 문자를 명확히 확인할 수 있다.
    printf("%d, %d", ch1, ch2);
    return 0;
}

/*
scanf 함수로 문자를 입력할 때는 %c 변환 문자를 사용한다.
%c는 알파벳이나 숫자 모양의 문자 등 형태가 있는 문자를 입력하지만
공백이나 탭 문자, 개행 문자와 같은 제어 문자, 즉 화이트 스페이스도 입력하므로 주의해야 한다.
물론 %d, %lf, %s와 같은 변환문자로 숫자나 문자열을 입력할 때는 데이터를 구분하는 용도로 쓰이며 그 자체가 데이터로 입력되지는 않는다.
위 코드에서, 문자를 입력할 때는 문자 세 개를 입력하지만 그 값은 하나의 데이터로 합쳐진다.

#   scanf에서 문자 분리하여 입력하기
:
scanf함수는 %c 앞에 화이트 스페이슬르 사용하면 문자도 분리하여 입력할 수 있는 특별한 기능이 있다.
만약 화이트 스페이스를 제외한 문자들만 입력하고 싶다면 %c 앞에 화이트 스페이스 중에 아무거나 하나를 추가한다.

scanf(" %c %c", &ch1, &ch2);

이 경우 화이트 스페이스(여기서는 공백)는 무시하고 그 외의 문자만 입력한다.
a(공백)b를 입력하면 ch1에는 a가 입력되고 ch2에는 b가 입력된다.



#   scanf 함수로 문자를 입력할 때 주의점
:
scanf 함수는 입력한 문자를 메모리의 1바이트 공간에 저장하도록 설계되었으므로 int형 변수를 사용하면
나머지 3바이트는 쓰레기 값으로 인해 문자의 아스키 코드 값을 바로 사용할 수 없게 된다.
이 경우 입력한 int형 변수를 별도의 char형 변수에 대입하여 입력한 문자만을 사용하도록 해야 한다.
따라서 결국 문자를 입력하는 경우에는 가능한 char형 변수를 사용하는 것이 좋다.






*/