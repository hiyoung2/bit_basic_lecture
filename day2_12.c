#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int mult, num;
    printf("n�� ����� �����Ͻÿ�: ");
    scanf("%d", &mult);

    printf("�� ������ ����ұ�� ? ");
    scanf("%d", &num);

    while (num > 0)
    {
        printf("mult�� ��� = %d\n", mult * num--);
    }

    return 0;
}

