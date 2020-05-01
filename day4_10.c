#include <stdio.h>
// srand(time(NULL))�� rand()�� ����ϱ� ���� ��� ���ϵ�
#include <stdlib.h>
#include <time.h>
// ���� ���̺귯��
#include <math.h>
/*
���� �迭�� ������!
2D ��ǥ���� x, y ������ ����� - ���� �ڽ����� 2���� �����Ͱ� ����.
�� �������� ������� ���� ��ġ���� ���� ����� ���� ã������ �Ѵ�.
���� ��ǥ���� ���͸��� ������ �� �ִ� ��ġ��.
�ش� ��ġ�� �� 7���� �ִ�. - ���� �ڽ��� 7�� �ִ�.
�̸� ���α׷��� �غ���!
��Ʈ - sqrt(x) == ��Ʈ x�� �����ϸ� math.h�� include�ؾ� ����� �� ����
int location[7][2];
*/
// int(*)[2] init_arr(void);
//   ��� - int(*)[2]: ���� �ڽ��� 2���� ���� ��� �迭
// �Լ� �̸� - init_arr
//   �Է� - void
int(*init_arr(void))[2]
{
    int i, j;
    static int location[7][2];

    // rand()�� �������� ����� ���� ��ó��
    srand(time(NULL));

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            // rand() �������� �̾Ƴ�
            location[i][j] = rand() % 5 + 1;    // 0 ~ 4 -> 1 ~ 5
        }
    }

    return location;
}

float* find_min(int(*loc)[2], int* current)
{
    int i, j;
    static float dist[7] = { 0 };
    // sqrt[ (x - x1)^2 + (y - y1)^2 ]
    for (i = 0; i < 7; i++)
    {
        dist[i] = sqrt(pow((current[0] - loc[i][0]), 2) + pow((current[1] - loc[i][1]), 2));
    }

    return dist;
}

//int(*)[2] p;
int(*p2)[2];

int main()
{
    int i;
    float *dist;
    int(*loc)[2] = NULL;
    int current[2] = {3, 3};
    loc = init_arr();
    dist = find_min(loc, current);

    for (i = 0; i < 7; i++)
    {
        printf("dist = %f\n", dist[i]);
    }

    return 0;
}
