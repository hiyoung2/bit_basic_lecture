#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 2. 1 ~ 50 중에 3의 배수를 찾아 모든 값을 더한 결과를 출력하시오.
int main()
{
    int num = 1,  mult = 3, sum = 0;

    while (num < 51)
    {
        if (!(num % mult))
        {
            printf("num = %d\n", num);
            sum = sum + num;
        }
        num++;
    }

    printf("sum = %d\n", sum);

    return 0;
}
