#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 1, 1, 3, 4, 5, 8, 12, 17, 25, 37, 54, ...
// ���� ���� ������ 30��° ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

// ������� ���鶧 ����Ѵ� - const
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
    printf("Ŀ���� ������ %d��° ���� = %d\n", NUM, custom_series(NUM));

    return 0;
}
