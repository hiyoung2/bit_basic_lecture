#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 1, 1, 3, 4, 5, 8, 12, 17, 25, 37, 54, ...
// ���� �������� 2�� ����� ã�� ��� ���ϴ� �Լ��� �ۼ��Ͻÿ�.
// ������ 50��° �ױ��� ����ϵ��� �Ѵ�.

// ������� ���鶧 ����Ѵ� - const
#define NUM     50

// ���������� �θ� data �����̶�� ������ ��ġ�ǰ� �ڵ����� 0���� �ʱ�ȭ
// (���� ��������� �ʱ�ȭ�� �κ��� ���ܵȴ�)
int arr[NUM] = { 1, 1, 3, };

int custom_series(int num)
{
    int sum = 0;

    for (int i = 3; i < NUM; i++)
    {
        arr[i] = arr[i - 3] + arr[i - 1];
        //printf("arr[%d] = %d\n", i, arr[i]);

        if (!(arr[i] % 2))
        {
            printf("arr[%d] = %d\n", i, arr[i]);
            sum += arr[i];
        }
    }

    return sum;
}

int main()
{
    printf("Ŀ���� ������ %d��° �ױ��� ¦������ ���� = %d\n", NUM, custom_series(NUM));

    return 0;
}
