// �⺻ �����ڵ�
// +, -, *, /, %(modular)

#include <stdio.h>

int mainI(){
	// ���� �������� �� �� �����ϸ� ���� ������ �߻�.
	// ���� ���� ��Ģ�� ����
	// ���� : ������ Ÿ���� ���ƾ� ��
	// num1 ���� �Ҵ��ϰų� �� �ص� �ȴ�.
	// �ٸ�, ���� ������ ������ �� ','�� ���.

	int num1, num2 = 33;
	int res;
	num1 = 77;

	res = num1 + num2;
	printf("res = &d\n", res);

	res = num1 - num2;
	printf("res = %d\n", res);

	// '*'�� ����
	res = num1 * num2;
	printf("res = %\d\n", res);

	// '/'�� ������
	res = num1 / num2;
	printf("res = %d\n", res);

	// '%'�� �������� ���ϴ� ����
	res = num1 % num2;
	printf("res = %d\n", res);
	return 0;
}
