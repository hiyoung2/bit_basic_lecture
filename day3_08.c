#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 팩토리얼을 구하는 함수를 작성해보시오.
// 재귀호출 방식
int recursive_factorial(int num)
{
    if (num < 2)
    {
        return 1;
    }

    return num * recursive_factorial(num - 1);
}

int factorial(int num)
{
    int tmp = 1;

    if (num < 2)
    {
        return 1;
    }

    while (num)
    {
        tmp *= num--;   // tmp = tmp * num--
    }

    return tmp;
}

int main()
{
    int num;
    printf("n 팩토리얼을 구해봅시다: ");
    scanf("%d", &num);

    printf("n 팩토리얼은 = %d\n", recursive_factorial(num));
    printf("n 팩토리얼은 = %d\n", factorial(num));

    return 0;
}