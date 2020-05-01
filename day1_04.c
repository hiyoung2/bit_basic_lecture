// 기본 연산자들
// +, -, *, /, %(modular)

#include <stdio.h>

int mainI(){
	// 같은 변수명을 두 번 선언하면 문법 오류가 발생.
	// 변수 생성 규칙은 동일
	// 조건 : 데이터 타입이 같아야 함
	// num1 값을 할당하거나 안 해도 된다.
	// 다만, 다음 변수를 구분할 때 ','를 사용.

	int num1, num2 = 33;
	int res;
	num1 = 77;

	res = num1 + num2;
	printf("res = &d\n", res);

	res = num1 - num2;
	printf("res = %d\n", res);

	// '*'은 곱셈
	res = num1 * num2;
	printf("res = %\d\n", res);

	// '/'은 나눗셈
	res = num1 / num2;
	printf("res = %d\n", res);

	// '%'는 나머지를 구하는 연산
	res = num1 % num2;
	printf("res = %d\n", res);
	return 0;
}
