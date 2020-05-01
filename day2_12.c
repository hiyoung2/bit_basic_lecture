#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int mult, num;
    printf("n의 배수를 설정하시오: ");
    scanf("%d", &mult);

    printf("몇 개까지 출력할까요 ? ");
    scanf("%d", &num);

    while (num > 0)
    {
        printf("mult의 배수 = %d\n", mult * num--);
    }

    return 0;
}

