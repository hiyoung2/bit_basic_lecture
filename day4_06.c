
#include <stdio.h>

int main()
{
    // �迭�� �̸��� �迭�� ��ǥ �ּҸ� ��Ÿ����.
    int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
    // �迭�� �ּҸ� ���� �� ������ �����ʹ� int �� ������ �ۿ� �� �� ����.
    int* p = arr;

    for (int i = 0; i < 7; i++)
    {
        printf("p[%d] = %d\n", i, p[i]);
    }

    return 0;
}
