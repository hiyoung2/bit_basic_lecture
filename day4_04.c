#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
// 3�� n�� ���ϴ� �Լ��� �ۼ��Ͻÿ�.
// n ���� �Է� �޾� �Է��ϸ� ����� ��µǰ� �����.
int calc_pow(int n)
{
    // #define �ܿ� ����� ����� �� �ٸ� ���
    const int base = 3;
    int tmp = 1;

    for (int i = 0; i < n; i++)
    {
        tmp *= base;
    }

    return tmp;
}

int use_math_pow(int n)
{
    return pow(3, n);
}

int main()
{
    int n;

    printf("3�� n�¿��� n���� �����Ͻÿ�: ");
    scanf("%d", &n);

    printf("3�� n���� = %d\n", calc_pow(n));
    printf("3�� n���� = %d\n", use_math_pow(n));

    return 0;
}

