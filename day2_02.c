// ���迬���� - ��Ʈ�����ڸ� ���� Ȯ���Ų ����

#include <stdio.h>

int main()
{
    int num1, num2, num3, tmp;
    // num1 = 10 ---> num1�� 10�� ����.
    // num1�̶�� �޸� ������ 10�̶�� ���� �����Ѵ� [���� ����]
    // num1 = num2 ---> num2 �޸� ������ �ִ� ���� num1 �޸� ������ �����Ѵ� [���� ����]
    num1 = 10;
    num2 = 20;
    num3 = 30;
    
    printf("num1 = %d, num2 = %d\n", num1, num2);
    tmp = num1;
    num1 = num2;
    num2 = tmp;
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // [��, ������ �Ǵ��ض�]
    printf("num1 > num2 = %d\n", num1 > num2);
    printf("num1 < num2 = %d\n", num1 < num2);

    // [��, ������ �Ǵ��ض�]
    printf("num1 >= num2 = %d\n", num1 >= num2);
    printf("num1 <= num2 = %d\n", num1 <= num2);

    // ���� �ʳ� ? [���� ���� - ��, ������ �Ǵ��ض�]
    printf("num1 != num2 = %d\n", num1 != num2);
    // ���� ? [���� ���� - ��, ������ �Ǵ��ض�]
    printf("num3 == 30 = %d\n", num3 == 30);

    return 0;
}