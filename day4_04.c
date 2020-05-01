#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
// 3의 n을 구하는 함수를 작성하시오.
// n 값을 입력 받아 입력하면 결과가 출력되게 만든다.
int calc_pow(int n)
{
    // #define 외에 상수를 만드는 또 다른 방법
    const int base = 3;
    int tmp = 1;

    for (int i = 0; i < n; i++)
    {
        tmp *= base;
    }

    return tmp;
}

int use_math_pow(int n)
{
    return pow(3, n);
}

int main()
{
    int n;

    printf("3의 n승에서 n값을 선택하시오: ");
    scanf("%d", &n);

    printf("3의 n승은 = %d\n", calc_pow(n));
    printf("3의 n승은 = %d\n", use_math_pow(n));

    return 0;
}

