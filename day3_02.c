// 1 ~20�� �������� 3�� ����� ���Ѵ�.
// 3���� ���� �������� 1�� ���ڴ� ���Ѵ�.
// 3���� ���� �������� 2�� ���ڴ� ����.
// ������ �����ϸ� ��� ���� ���� ����Ͻÿ�.

// 1. ���ϴ� ����, ���ϴ� ����, ��������(3�� ����)
// 2. for 1 ~ 20
// 3. 3�� ����� ����� �ý��� - if, % 3
#include <stdio.h>

int main()
{
    int res = 0, add = 0, mul = 1, sub = 0;
    for (int num = 1; num < 21; num++)
    {
        if (!(num % 3))
        {
            add += num;
            // add = add + num ���Ǿ�
            printf("add = %d\n", add);
        }
        else if (num % 3 == 1)
        {
            mul *= num;
            // mul = mul * num;
            printf("mul = %d\n", mul);
        }
        else
        {
            sub -= num;
            // sub = sub - num;
            printf("sub = %d\n", sub);
        }
    }

    res = add + mul + sub;
    printf("���� ��� = %d\n", res);

    return 0;
}

