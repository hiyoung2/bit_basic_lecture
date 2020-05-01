#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 배열을 활용해서 피보나치 수열을 계산해보도록 한다.
int main()
{
    int num;
    int arr[33] = { 0 };

    printf("몇 번째 항의 피보나치 수열을 구할까요 ? ");
    scanf("%d", &num);

    // 초항 설정
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
