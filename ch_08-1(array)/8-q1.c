#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3};

    for (int i = 0; i < (sizeof(arr) / sizeof(1)); i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}