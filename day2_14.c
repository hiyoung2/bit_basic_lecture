#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 2. 1 ~ 50 �߿� 3�� ����� ã�� ��� ���� ���� ����� ����Ͻÿ�.
int main()
{
    int num = 1,  mult = 3, sum = 0;

    while (num < 51)
    {
        if (!(num % mult))
        {
            printf("num = %d\n", num);
            sum = sum + num;
        }
        num++;
    }

    printf("sum = %d\n", sum);

    return 0;
}
