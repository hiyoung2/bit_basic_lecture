#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Է����� �Ǻ���ġ ���� ������ �޾Ƽ�
// �Ǻ���ġ ������ ����ϴ� �Լ��� ������!
// 1 1 2 3 5 8 13 21 34 55 ...
int fib(int num)
{
    int first = 1, second = 1;

    if (num < 3)
    {
        return 1;
    }

    num -= 2;   // num = num - 2;

    // 1 1 2 3 5 8 13 21 34 55 ...
    // first = 1, second = 1
    // first = 1, second = 2
    // first = 2, second = 3

    // C���� ���� 0�� �����̰� �ٸ� ������ ������ �νĵ�
    while (num--)
    {
        // '='�� ���� �������� ���� ����Ƿ� tmp�� ������� ���� ���
        int tmp = first;
        first = second;
        second = tmp + second;
        printf("first = %d, second = %d\n", first, second);
    }

    return second;
}

int main()
{
    int num;
    printf("�� ��° �Ǻ���ġ ���� ���ϰڽ��ϱ� ? ");
    scanf("%d", &num);

    printf("ã�� ���� ���ڴ� = %d\n", fib(num));

    return 0;
}
