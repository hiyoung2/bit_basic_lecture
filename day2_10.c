#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int score;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &score);

    score /= 10;

    switch (score)
    {
        case 10:
        case 9:
            printf("90 ~ 100��: A\n");
            break;
        case 8:
            printf("80 ~ 89��: B\n");
            break;
        case 7:
            printf("70 ~ 79��: C\n");
            break;      // ��������� �ϰ� �Ʒ��� ���� ����.
        case 6:
            printf("60 ~ 69��: D\n");
            break;
            // break�� ���� ������ switch������ break�� ���������� �Ʒ��� �����Ѵ�.
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("�������̴� �δٴٴٴ�\n");
            break;
        default:
            printf("�߸��� ������ �Է��ϼ̽��ϴ�.\n");
            break;
    }

    return 0;
}