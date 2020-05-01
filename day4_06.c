
#include <stdio.h>

int main()
{
    // 배열의 이름은 배열의 대표 주소를 나타낸다.
    int arr[7] = { 1, 2, 3, 4, 5, 6, 7 };
    // 배열의 주소를 받을 수 있지만 데이터는 int 형 단위로 밖에 볼 수 없다.
    int* p = arr;

    for (int i = 0; i < 7; i++)
    {
        printf("p[%d] = %d\n", i, p[i]);
    }

    return 0;
}
