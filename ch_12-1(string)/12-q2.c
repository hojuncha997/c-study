#include <stdio.h>

int main(void)
{
    char ani[20];
    char why[80];
    printf("좋아하는 동물 : ");
    scanf("%s", ani);

    // 필요한 문장(결과2): 아래 셋 중에 하나를 사용하면 된다.
    fgetc(stdin);
    // getchar();
    // scanf("%*c");

    printf("좋아하는 이유: ");
    fgets(why, sizeof(why), stdin);
    printf("%s is %s", ani, why);

    return 0;
}

/*
결과1:
좋아하는 동물 : dog
좋아하는 이유: dog is

(버퍼에서 개행문자가 남아 있어서 fgets가 그걸 버퍼에서 받고 끝내버림. 따라서 버퍼 비워야함.)

결과2:
좋아하는 동물 : dog
좋아하는 이유: very faithful
dog is very faithful


*/