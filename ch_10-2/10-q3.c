#include <stdio.h>
#include <stdbool.h> // for bool type

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);
bool is_duplicate(int *lotto_nums, int num, int index);

int main(void)
{
    int lotto_nums[6];

    input_nums(lotto_nums);
    print_nums(lotto_nums);

    return 0;
}

void input_nums(int *lotto_nums)
{
    int num;
    for (int i = 0; i < 6; i++)
    {

        do
        {
            printf("번호 입력: ");
            scanf("%d", &num);
            // printf("%d", num);
            if (is_duplicate(lotto_nums, num, i))
            {
                printf("잘못된 번호입니다. 다시 입력해주세요: ");
            }
        } while (is_duplicate(lotto_nums, num, i)); //(is_duplicate(lotto_nums, num, i))이 참인 동안 계속 반복

        lotto_nums[i] = num;
        printf("lotto_nums[%d] : %d\n", i, lotto_nums[i]);
    }
}

void print_nums(int *lotto_nums)
{
    printf("로또 번호: ");
    for (int i = 0; i < 6; i++)
    {

        printf("%d ", lotto_nums[i]);
    }
}

bool is_duplicate(int *lotto_nums, int num, int index)
{
    // printf("num in dup : %d\n ", num);
    // printf("index in dup : %d\n ", index);
    for (int i = 0; i < index; i++)
    {
        if (num == lotto_nums[i])
        {
            return true;
        }
    }
    return false;
}

/*
1~45 중 6개의 서로 다른 수를 배열에 입력하고 출력한다.
입력한 수가 이미 저장된 수와 같으면 에러 메시지를 출력하고 다시 입력한다.
*/