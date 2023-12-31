#include <stdio.h>

void print_ary(int *pa);

int main(void)
{
    int ary[5] = {10, 20, 30, 40, 50};

    print_ary(ary); // 배열명(배열의 첫 번째 요소의 주소값)을 주고 함수 호출

    return 0;
}

void print_ary(int *pa) // 매개변수로 포인터 선언
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", pa[i]);
    }
}
/*
결과:
10 20 30 40 50
*/

/*
배열명을 꼭 포인터에 넣는 방식으로 배열을 처리할 필요는 없다.
하지만 함수로 배열을 처리하려면 포인터가 필요하다. ary 배열에서 배열명 ary는 첫 번째 배열 요소의 주소이다.
이 주소값을 함수의 인수로 주면 함수는 이 값을 받아 주소 계산을 통해 모든 배열요소를 사용할 수 있다.

이 때 배열명을 받을 함수의 매개변수 자리에 포인터가 필요하다.

배열의 모든 요소가 int이면 당연히 첫 번째 요소도 int형이다. 배열명을 함수의 인수로 준다는 것은 결국
int형 변수의 주소를 전달한다는 것이다. 따라서 매개변수로 받을 때에는 int형 변수의 주소를 저장할 포인터를 선언해야 한다.


#   배열의 값을 출력하는 함수
:
모든 배열 요소를 함수의 인수로 줘야 할 필요는 없다. 첫 번째 배열 요소의 주소만 알면
나머지 배열 요소는 포인터 연산으로 모두 사용할 수 있다. 따라서 함수를 호출할 때는 배열명을 주고
함수의 매개변수로 포인터를 선언한다. 그리고 함수 안에서 포인터를 배열명처럼 사용한다.
배열명 자체가 주소이므로 그 값을 함수의 인수로 주는 것은 가능하다.

print_ary 함수는 주소를 매개변수로 받아서 main함수에 있는 배열의 값을 출력한다.
이와 같은 방법은 배열에 있는 대량의 데이터를 다른 함수롭 ㅗㄱ사하지 않고 접근하므로 효율적이다.
다만 의도치 않게 값을 바꿀 수도 있으므로 주의해야 한다.




*/
