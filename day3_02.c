// 1 ~20의 범위에서 3의 배수는 더한다.
// 3으로 나눠 나머지가 1인 숫자는 곱한다.
// 3으로 나눠 나머지가 2인 숫자는 뺀다.
// 각각을 연산하면 모두 더한 값을 계산하시오.

// 1. 더하는 값들, 곱하는 값들, 음수값들(3개 변수)
// 2. for 1 ~ 20
// 3. 3의 배수에 기반한 시스템 - if, % 3
#include <stdio.h>

int main()
{
    int res = 0, add = 0, mul = 1, sub = 0;
    for (int num = 1; num < 21; num++)
    {
        if (!(num % 3))
        {
            add += num;
            // add = add + num 동의어
            printf("add = %d\n", add);
        }
        else if (num % 3 == 1)
        {
            mul *= num;
            // mul = mul * num;
            printf("mul = %d\n", mul);
        }
        else
        {
            sub -= num;
            // sub = sub - num;
            printf("sub = %d\n", sub);
        }
    }

    res = add + mul + sub;
    printf("최종 결과 = %d\n", res);

    return 0;
}

