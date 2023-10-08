#include <stdio.h>

int main(void)
{
    int A[3] = {1, 2, 3};
    int B[10];

    // A 배열의 값을 B 배열로 복사. B의 길이만큼 반복

    for (int i = 0; i < sizeof(B) / sizeof(int); i++)
    {

        B[i] = A[i % (sizeof(A) / sizeof(int))];
    }

    // B 배열의 값을 출력
    for (int i = 0; i < sizeof(B) / sizeof(int); i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}
