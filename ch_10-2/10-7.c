#include <stdio.h>

void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main(void)
{
    double ary[5];
    double max;
    int size = sizeof(ary) / sizeof(ary[0]);

    input_ary(ary, size);
    max = find_max(ary, size);
    printf("배열의 최댓값: %.1lf\n", max);

    return 0;
}

void input_ary(double *pa, int size) // double 포인터를 매개변수로 선언
{
    int i;
    printf("%d개의 실수값 입력: ", size);

    for (i = 0; i < size; i++) // size값에 따라 반복 횟수 결정
    {
        scanf("%lf", pa + i); // &pa[i]도 가능
    }
}

double find_max(double *pa, int size)
{
    double max;
    int i;

    max = pa[0];               // 첫 번째 배열 요소의 값을 최댓값으로 설정
    for (i = 0; i < size; i++) // 두 번쨰 배열 요소부터 max와 비교
    {
        if (pa[i] > max)
        {
            max = pa[i]; // 새로운 배열 요소의 값이 max보다 크면 대입
        }
    }

    return max;
}
/*
결과:
5개의 실수값 입력: 0.1 0.3 0.2 0.5 0.7
배열의 최댓값: 0.7
*/

/*
scanf 함수는 입력한 값을 저장할 배열의 위치를 알아야 하므로 인수로 받은 pa값을 그대로 사용한다.
물론 *(pa + 1)의 연산으로 배열요소를 구하고 다시 &(*(pa+i))와 같이 주소 연산을 사용하는 방법도 가능하다.
그러나 불필요한 연산이 반복되므로 비효율적이다.


#   함수의 매개변수 자리에 배열을 선언하는 경우
:
함수의 매개변수 자리에 배열을 선언하면 배열의 저장공간이 할당되지 않으며 배열명은 컴파일 과정에서
첫 번째 배열 요소를 가리키는 포인터로 바뀐다.

void func(int pa[5]){...} ==> void func(int *pa){...}

따라서 매개변수 자리에 선언되 ㄴ배열에서 배열 요소의 개수는 의미가 없으며 생략 가능하다.
이런 자동 변환 기능 때문에 배열과 포인터에 대한 깊은 이해가 없어도 배열을 처리하는 함수를 쉽게 만들 수 있다.
즉, 함수의 매개변수에 처리할 배열과 같은 배열을 선언하고 함수 안에서 배열처럼 사용하면 된다.
컴파일러는 배열명을 자동으로 포인터로 바꾸고 모든 배열 요소를 사용할 수 있도록 포인터 연산을 수행한다.

int ary[5] = {1,2,3,4,5};
print_ary(ary);

void print_ary(int pa[5])
{
    int i;
    for(i =0; i<5; i++)
    {
        printf("%d ", pa[i]);
    }
}


*/