
// 3 과 5 의 배수를 모두 출력하는 프로그램을 작성하시오.
// 중복 허용하지 않으며 범위는 1 ~ 100으로 잡는다. 

// 1. for문 1 ~ 100
// 3 과 5의 배수(if    %3, %5)
#include <stdio.h>

int main()
{
    for (int num = 1; num < 101; num++)
    {
        if (!(num % 3))
        {
            printf("num = %d\n", num);
        }
        else if (!(num % 5))
        {
            printf("num = %d\n", num);
        }
    }
    return 0;
}