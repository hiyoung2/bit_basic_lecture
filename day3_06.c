#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� ���� - � ���������� ����� �� �ִ� ����
// ���� ���� - �Լ� ���� �������� ����� �� �ִ� ����
int num1, num2;

// �Է��� �޴� �Լ��� �ۼ��غ���!
// �Է� �κ��� ��� ������ void�� �ǹ��Ѵ�.
// �� �Էµ� ��µ� ������ �ǹ��Ѵ�.
void input()
{
    printf("ù ��° ������ �Է��Ͻÿ�: ");
    scanf("%d", &num1);

    printf("�� ��° ������ �Է��Ͻÿ�: ");
    scanf("%d", &num2);
}

// ��� �񱳸� �����ϴ� �Լ��� �ۼ��غ���! - ū ���ڸ� ����ϵ��� ����!
int find_max()
{
    if (num1 > num2)
    {
        printf("num1(%d)�� num2(%d) ���� ũ��.\n", num1, num2);
        return num1;
    }
    else if (num1 < num2)
    {
        printf("num1(%d)�� num2(%d) ���� �۴�.\n", num1, num2);
        return num2;
    }
    else
    {
        printf("num1(%d)�� num2(%d)�� ����.\n", num1, num2);
        return 0;
    }
}

int main()
{
    int res;

    input();

    if (!(res = find_max()))
    {
        printf("��� �񱳰� �Ұ��մϴ�. �ٽ� �Է����ּ��� ~\n");
        return -1;
        // �� �������� main �Լ��� ������ �����ϰڽ��ϴ�.
    }

    printf("max���� ? %d\n", res);

    return 0;
}
