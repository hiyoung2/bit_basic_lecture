#include <stdio.h>

int main()
{
    int test[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int num1 = 3, num2 = 7, num3 = 33;
    int* arr[3] = { &num1, &num2, &num3 };
    // int(*)[3] arr2 = test
    // 이름에서 먼저 왼쪽으로 가서 가장 가까운 여는 괄호를 찾는다.
    // 괄호에 붙어있는 특수문자가 있다면 전부 땡겨온다.
    // 이후 오른쪽으로 가서 가장 가까운 닫는 괄호를 찾고 뒤쪽의 정보를 싹다 땡겨온다.
    // 해당 작업을 더 이상 괄호가 없을때까지 반복한다.
    int(*arr2)[3] = test;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("arr2[%d][%d] = %d\n", i, j, arr2[i][j]);
        }
    }

    return 0;
}

