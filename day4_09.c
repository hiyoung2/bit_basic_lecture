#include <stdio.h>
// 배열 vs 이중 배열

int main()
{
    int arr1[4] = { 1, 2, 3, 4 };
    int arr2[2][2] = { {1, 2}, {3, 4} };

    for (int i = 0; i < 4; i++)
    {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("arr2[%d][%d] = %d\n", i, j, arr2[i][j]);
        }
    }

    return 0;
}

