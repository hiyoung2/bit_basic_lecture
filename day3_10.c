#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �迭�� Ȱ���ؼ� �Ǻ���ġ ������ ����غ����� �Ѵ�.
int main()
{
    int num;
    int arr[33] = { 0 };

    printf("�� ��° ���� �Ǻ���ġ ������ ���ұ�� ? ");
    scanf("%d", &num);

    // ���� ����
    arr[0] = 1;
    arr[1] = 1;

    // arr[0] [1] [2] [3] [4] [5] [6] [7]
    //     1   1
    //             2   3   5   8   13  21
    for (int i = 2; i < num; i++)
    {
        arr[i] = arr[i - 2] + arr[i - 1];
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
