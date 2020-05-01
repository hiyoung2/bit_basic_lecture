#include <stdio.h>

// 문제 1, 3, 7 을 받아서 모두 더하고 출력하는 함수를 만드시오.
int add(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

int main()
{
    printf("res = %d\n", add(1, 3, 7));

    return 0;
}
