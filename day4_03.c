#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 1, 1, 3, 4, 5, 8, 12, 17, 25, 37, 54, ...
// 위의 수열에서 2의 배수를 찾아 모두 더하는 함수를 작성하시오.
// 범위는 50번째 항까지 계산하도록 한다.

// 상수값을 만들때 사용한다 - const
#define NUM     50

// 전역변수로 두면 data 영역이라는 공간에 배치되고 자동으로 0으로 초기화
// (값을 명시적으로 초기화한 부분은 제외된다)
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
    printf("커스텀 수열의 %d번째 항까지 짝수들의 합은 = %d\n", NUM, custom_series(NUM));

    return 0;
}
