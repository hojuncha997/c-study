#include <stdio.h>
int main(void)
{
    unsigned int a;

    a = 4294967295;    // 큰 양수 저장. unsigned를 사용했으므로 가능
    printf("%d\n", a); // %d로 출력: 부호까지 생각해서 10진수로 출력 -1

    a = -1;
    printf("%u\n", a); // %u로 출력: 부호 없는 10진수로 출력. -1의 보수와 같아진다. 부호를 무시하므로 4294967295를 그대로 출력

    return 0;
}

/*
정수형은 보통 양수와 음수 모두 저장한다.
양수만 저장하면 두 배 더 넓은 범위의 값을 저장할 수 있다.
따라서 나이와 같이 음수가 없는 데이터를 저장할 때는 unsigned를 사용한다.
즉, 정수형을 양수 전용으로 쓰고 싶을 때는 unsigned를 사용한다.
*/