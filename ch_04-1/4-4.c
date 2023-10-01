#include <stdio.h>

int main(void)
{
    int a = 5, b = 5;
    int pre, post;

    pre = (++a) * 3;  //  전위형 증감 연산자
    post = (b++) * 3; //  후위형 증감 연산자

    printf("초깃값 a = %d, b = %d\n", a, b);
    printf("전위형: (++a)*3=%d, 후위형: (b++)*3=%d\n", pre, post);

    return 0;

    /*
    하나의 수식에서 같은 변수를 두 번 이상 사용할 때는
    그 변수에 증감 연산자를 사용하면 안 된다.
    */
}