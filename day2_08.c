#define _CRT_SECURE_NO_WARNINGS
// _CRT_SECURE_NO_WARNINGS�� ������ 0���� �����Ͽ� ������ �߻����� �ʰ� ����.

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("ù��° ������ �Է��Ͻÿ�: ");
    scanf("%d", &num1);

    printf("�ι�° ������ �Է��Ͻÿ�: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d�� %d ���� ũ��.\n", num1, num2);
    }
    else  // num1 <= num2
    {
        printf("%d�� %d ���� �۴�.\n", num1, num2);
    }

    return 0;
}
