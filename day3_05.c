#include <stdio.h>

// ���� 1, 3, 7 �� �޾Ƽ� ��� ���ϰ� ����ϴ� �Լ��� ����ÿ�.
int add(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

int main()
{
    printf("res = %d\n", add(1, 3, 7));

    return 0;
}
