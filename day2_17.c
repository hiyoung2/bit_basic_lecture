#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1. �� ���� ���ڸ� �Է� �޵��� �Ѵ�.
//    �Է¹޾� �� ������ ����� ��� ���Ѵ�.
//    ������ 1 ~ 20 ������ ������ �����Ѵ�.
//    (�ߺ� ������)


// 1. �� ���� ���ڸ� �Է� �޵��� �Ѵ� - scanf
//    �Է¹޾� �� ������ ����� ��� ���Ѵ� - sum, if
//    ������ 1 ~ 20 ������ ������ �����Ѵ� - for
//    (�ߺ� ������)
int main()
{
    int num1, num2, sum = 0;

    printf("ù ��° ����� �Է��Ͻÿ�: ");
    scanf("%d", &num1);

    printf("�� ��° ����� �Է��Ͻÿ�: ");
    scanf("%d", &num2);

    for (int i = 1; i < 21; i++)
    {
        if (!(i % num1))
        {
            sum = sum + i;
            printf("num1 = %d\n", i);
        }

        if (!(i % num2))
        {
            sum = sum + i;
            printf("num2 = %d\n", i);
        }
    }

    printf("sum = %d\n", sum);

    return 0;
}


