#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 2. 1 ~ 50 �߿� 3�� ����� ã�� ��� ���� ���� ����� ����Ͻÿ�.

int main()
{
    int mult = 3, sum = 0;

    for (int num = 1; num < 51; num++)
    {
        if (!(num % mult))
        {
            printf("num = %d\n", num);
            sum = sum + num;
        }
    }

    printf("sum = %d\n", sum);

    return 0;
}