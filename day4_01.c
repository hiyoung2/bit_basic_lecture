#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int recurs_fib(int num)
{
    if (num < 3)
    {
        return 1;
    }
    return recurs_fib(num - 1) + recurs_fib(num - 2);
}
// �Ǻ���ġ ������ ���ȣ��� �����غ����� ����!
int main()
{
    int num;

    printf("�Ǻ���ġ ���� n ��°�� �Է��ϼ���: ");
    scanf("%d", &num);

    printf("n��° �Ǻ���ġ ������ ���� = %d\n", recurs_fib(num));

    return 0;
}
