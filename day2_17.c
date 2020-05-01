#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1. 두 개의 숫자를 입력 받도록 한다.
//    입력받아 두 숫자의 배수를 모두 더한다.
//    범위는 1 ~ 20 까지의 범위로 한정한다.
//    (중복 괜찮음)


// 1. 두 개의 숫자를 입력 받도록 한다 - scanf
//    입력받아 두 숫자의 배수를 모두 더한다 - sum, if
//    범위는 1 ~ 20 까지의 범위로 한정한다 - for
//    (중복 괜찮음)
int main()
{
    int num1, num2, sum = 0;

    printf("첫 번째 배수를 입력하시오: ");
    scanf("%d", &num1);

    printf("두 번째 배수를 입력하시오: ");
    scanf("%d", &num2);

    for (int i = 1; i < 21; i++)
    {
        if (!(i % num1))
        {
            sum = sum + i;
            printf("num1 = %d\n", i);
        }

        if (!(i % num2))
        {
            sum = sum + i;
            printf("num2 = %d\n", i);
        }
    }

    printf("sum = %d\n", sum);

    return 0;
}


