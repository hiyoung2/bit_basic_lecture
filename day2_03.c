#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20, res1, res2;

    res1 = num1 > num2; // 거짓
    res2 = num1 < num2; // 참

    // 단순히 비트 연산자는 숫자에 적용하는 연산자다.
    // 그러나 논리 연산자는 논리에 적용하는 비트 연산자다.
    // 숫자 비트 연산 - and, or, xor, not
    // 논리 연산 - and, or, not
    
    // &&는 논리연산자 and
    // ||는 논리연산자 or
    // !는 논리연산자 not

    printf("res1 && res2 = %d\n", res1 && res2);
    printf("res1 || res2 = %d\n", res1 || res2);
    printf("!res1 = %d\n", !res1);
    printf("!res2 = %d\n", !res2);

    return 0;
}
