// ������ �� ��� �ұ�?
// ���� ���� ��Ȳ�� ��ó�ϱ� ����.

#include <stdio.h>

// math.h�� ���� ���̺귯���� ����ϱ� ���� include �Ѵ�.

#include <math.h>

int main()
{
	printf("%d\n", 3);
	printf("*lf\n", 7.7);
	printf("test\n");

	// ���� ���� �׳� ����� �Է��ص� �Ǵµ� ������ �� �ʿ��Ѱ�?
	// 222x222
	// �ܼ� ����� ���� ���ϹǷ� ����� �ϱ� ���� ����� ��ǻ�Ϳ��� ��Ų��.
	// �׸��� ������� �����ϴ� �뵵�� ������ ����Ѵ�.
	/* ����Ʈ�� ��� ����� �����ϴ� �뵵*/

	int value = 2;
	
	// *�� ������ �ǹ�.
	int res = value * value;

	// pow(power series�� ���ڷ� ��޼��� �ǹ�)
	// value�� ������ �ǹ���
	// �� ������ ���� (int)��� ǥ���� �ִ�.
	// ���� �⺻������ pow�� float�̳� double�� ������� �Ѵ�.
	// �׷��� ������ ���������� int Ÿ������ ����ȯ(Type Catsting)�� ����.

	res = (int)pow(value, 2);

	res = value * value * value * value;
	res = (int)pow(value, 4);

	printf("res = %d\n", res);

	return 0;

}