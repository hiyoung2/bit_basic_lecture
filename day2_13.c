#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1. 1 ~ 50 중에 2의 배수를 찾아서 출력하시오.

int main()
{
    int num = 1,  mult = 2;

    while (num < 51)
    {
        // num % 2 ---> 2로 나눈 나머지
        // 2로 나눠 나머지가 0인 경우는 2의 배수다.
        // 0은 거짓, 1은 참인데 우리가 찾는게 2의 배수이므로
        // 0의 거짓을 부정하여 강제로 참으로 만든다.
        if (!(num % 2))
        //if(num % 2 == 0) - 위의 코드와 동일한 의미지만 속도는 위의 경우가 더 빠르다.
        {
            printf("num = %d\n", num);
        }
        num++;
    }

    return 0;
}