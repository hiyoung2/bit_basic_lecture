#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20, res1, res2;

    res1 = num1 > num2; // ����
    res2 = num1 < num2; // ��

    // �ܼ��� ��Ʈ �����ڴ� ���ڿ� �����ϴ� �����ڴ�.
    // �׷��� �� �����ڴ� ���� �����ϴ� ��Ʈ �����ڴ�.
    // ���� ��Ʈ ���� - and, or, xor, not
    // �� ���� - and, or, not
    
    // &&�� �������� and
    // ||�� �������� or
    // !�� �������� not

    printf("res1 && res2 = %d\n", res1 && res2);
    printf("res1 || res2 = %d\n", res1 || res2);
    printf("!res1 = %d\n", !res1);
    printf("!res2 = %d\n", !res2);

    return 0;
}
