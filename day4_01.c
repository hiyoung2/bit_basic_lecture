#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int recurs_fib(int num)
{
    if (num < 3)
    {
        return 1;
    }
    return recurs_fib(num - 1) + recurs_fib(num - 2);
}
// 피보나치 수열을 재귀호출로 구현해보도록 하자!
int main()
{
    int num;

    printf("피보나치 항의 n 번째를 입력하세요: ");
    scanf("%d", &num);

    printf("n번째 피보나치 수열의 항은 = %d\n", recurs_fib(num));

    return 0;
}
