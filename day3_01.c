
// 3 �� 5 �� ����� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
// �ߺ� ������� ������ ������ 1 ~ 100���� ��´�. 

// 1. for�� 1 ~ 100
// 3 �� 5�� ���(if    %3, %5)
#include <stdio.h>

int main()
{
    for (int num = 1; num < 101; num++)
    {
        if (!(num % 3))
        {
            printf("num = %d\n", num);
        }
        else if (!(num % 5))
        {
            printf("num = %d\n", num);
        }
    }
    return 0;
}