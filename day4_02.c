#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 1, 1, 3, 4, 5, 8, 12, 17, 25, 37, 54, ...
// 위와 같은 수열의 30번째 항을 구하는 프로그램을 작성하시오.

// 상수값을 만들때 사용한다 - const
#define NUM     30

int custom_series(int num)
{
    int first = 1, second = 1, third = 3, tmp;

    num -= 3;
    // first second third
    //   1      1     3     4
    //        first second third
    //          1     3     4     5
    //              first second third
    //                3     4     5     8
    while (num--)
    {
        tmp = first;
        first = second;
        second = third;
        third = tmp + third;
        printf("third = %d\n", third);
    }

    return third;
}

int main()
{
    printf("커스텀 수열의 %d번째 항은 = %d\n", NUM, custom_series(NUM));

    return 0;
}
