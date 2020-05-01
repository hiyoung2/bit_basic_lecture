#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 입력으로 피보나치 항의 개수를 받아서
// 피보나치 수열을 계산하는 함수를 만들어보자!
// 1 1 2 3 5 8 13 21 34 55 ...
int fib(int num)
{
    int first = 1, second = 1;

    if (num < 3)
    {
        return 1;
    }

    num -= 2;   // num = num - 2;

    // 1 1 2 3 5 8 13 21 34 55 ...
    // first = 1, second = 1
    // first = 1, second = 2
    // first = 2, second = 3

    // C에서 숫자 0은 거짓이고 다른 값들은 참으로 인식됨
    while (num--)
    {
        // '='은 대입 개념으로 값을 덮어쓰므로 tmp에 덮어써질 값을 백업
        int tmp = first;
        first = second;
        second = tmp + second;
        printf("first = %d, second = %d\n", first, second);
    }

    return second;
}

int main()
{
    int num;
    printf("몇 번째 피보나치 항을 구하겠습니까 ? ");
    scanf("%d", &num);

    printf("찾는 항의 숫자는 = %d\n", fib(num));

    return 0;
}
