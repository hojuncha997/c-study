#include <stdio.h>
int main(void)
{
    return 0;
}

/*
C언어는 메모리에 접근해서 원하는 방식으로 데이터를 사용할 수 있는 언어이다.
메모리에 접근하는 가장 쉬운 방법은 변수를 사용하는 것이다.
그러나 메모리의 주소값을 이용하는 포인터를 사용해서 메모리에 접근할 수도 있다.

변수 사용은, 변수 선언으로 메모리에 공간을 확보하고 그곳을 데이터를 store, load하는 공간으로 사용했다.
변수명은 그러한 메모리 공간을 식별할 수 있는 이름이었다.

그러나 변수는 블록, 함수 내부로 사용이 제한돼 있다.
사용 범위를 벗어난 경우에도 데이터를 공유할 수 있는 방법은 포인터를 사용하는 것이다.

##  메모리의 주소
: 메모리는 데이터를 넣고 꺼내 쓰는 공간으로 그 위치를 식별할 수 있어야 한다.
프로그램이 사용하는 메모리의 위치는 주소 값으로 식별할 수 있다.

    주소값은 바이트 단위로 구분된다. 이 값은 0부터 시작하고 바이트 단위로 1씩 증가한다.
따라서 2바이트 이상의 크기를 갖는 변수는 여러 개의 주소 값에 걸쳐 할당된다.
예를 들어 int형 변수 a가 메모리 100번지로부터 할당되었다면 100번지부터 103번지까지 4바이트에 걸쳐 할당된다.
변수 선언 이후에는 4바이트 전체를 a라는 이름으로 사용한다.

변수 a의 공간

100(주소값)   101           102            103
[           ][            ][             ][             ]







*/