#include <stdio.h>

void swap(double *pa, double *pb);
void line_up(double *maxp, double *midp, double *minp);

int main(void)
{

    double max, mid, min;

    printf("실수값 3개 입력 : ");
    scanf("%lf%lf%lf", &max, &mid, &min);

    line_up(&max, &mid, &min);
    printf("정렬된 값 출력 : %.1lf, %.1lf, %.1lf\n", max, mid, min);

    return 0;
}

void swap(double *pa, double *pb)
{
    double temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void line_up(double *maxp, double *midp, double *minp)
{
    double temp;
    printf("line_up1\n");
    // printf("%.2lf %.2lf %.2lf\n ", maxp, midp, minp);    // 0.00 0.00 0.00
    // printf("%.2lf %.2lf %.2lf\n ", *maxp, *midp, *minp); // 2.70 1.50 3.40

    if (*minp > *midp)
    {
        printf("line_up2\n");
        // swap((double *)midp, (double *)minp); 캐스팅 필요 없음
        swap(midp, minp);
        printf("%.2lf %.2lf %.2lf\n ", *maxp, *midp, *minp); // 2.70 3.40 1.50
    }

    if (*midp > *maxp)
    {
        printf("line_up3\n");
        swap(maxp, midp);
        printf("%.2lf %.2lf %.2lf\n ", *maxp, *midp, *minp); // 3.40 2.70 1.50
    }

    if (*minp > *midp)
    {
        printf("line_up2\n");
        swap(midp, minp);
        printf("%.2lf %.2lf %.2lf\n ", *maxp, *midp, *minp); // 2.70 3.40 1.50
    }
}

/*
키보드로 실수 3개를 입력한 뒤작은 숫자로 정렬할 뒤 출력하는 프로그램 작성.
*/