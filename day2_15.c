
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1. 1 ~ 50 �߿� 2�� ����� ã�Ƽ� ����Ͻÿ�.
int main()
{
    // for���� �ۼ��ϴ� ���
    // 1. for���� ����
    //    for(�ʱ�ȭ; ���Ǻ�; ������)
    //    �ʱ�ȭ�� for���� ���� ���Խ� �� ���� ����ȴ�.
    //    ���Ǻδ� while�� �����ϰ� �ݺ��� ���� ���θ� �����Ѵ�.
    //    �����δ� while���� num++ �ϴ� �۾��� for ��ü�� �ڵ����� ���ֵ��� ������ش�.
    // 2. ���� for�� ���� ��ȣ�� ���� �ݴ´�.
    // 3. �ʱⰪ�� �����Ѵ�(�ʱ�ȭ �κ�) - ���� ����
    // 4. ������ �ۼ��Ѵ�(���Ǻ� �κ�)
    // 5. �����θ� �ۼ��Ѵ�.
    // 6. �߰�ȣ�� ���� �ݴ´�.
    // 7. �߰�ȣ ���ο� ���� ������ �ݺ� �۾��� �ۼ��Ѵ�.
 /* while (num < 51)
    {
        if (!(num % 2))
        {
            printf("num = %d\n", num);
        }
        num++;
    } */

    for (int i = 1; i < 51; i++)
    {
        if (!(i % 2))
        {
            printf("i = %d\n", i);
        }
    }

    return 0;
}
