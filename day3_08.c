#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���丮���� ���ϴ� �Լ��� �ۼ��غ��ÿ�.
// ���ȣ�� ���
int recursive_factorial(int num)
{
    if (num < 2)
    {
        return 1;
    }

    return num * recursive_factorial(num - 1);
}

int factorial(int num)
{
    int tmp = 1;

    if (num < 2)
    {
        return 1;
    }

    while (num)
    {
        tmp *= num--;   // tmp = tmp * num--
    }

    return tmp;
}

int main()
{
    int num;
    printf("n ���丮���� ���غ��ô�: ");
    scanf("%d", &num);

    printf("n ���丮���� = %d\n", recursive_factorial(num));
    printf("n ���丮���� = %d\n", factorial(num));

    return 0;
}