// 변수를 왜 써야 할까?
// 여러 가지 상황에 대처하기 위해.

#include <stdio.h>

// math.h는 수학 라이브러리를 사용하기 위해 include 한다.

#include <math.h>

int main()
{
	printf("%d\n", 3);
	printf("*lf\n", 7.7);
	printf("test\n");

	// 위와 같이 그냥 상수로 입력해도 되는데 변수가 왜 필요한가?
	// 222x222
	// 단순 계산을 아주 잘하므로 사람이 하기 힘든 계산을 컴퓨터에게 시킨다.
	// 그리고 결과값을 저장하는 용도로 변수를 사용한다.
	/* 포인트는 계산 결과를 저장하는 용도*/

	int value = 2;
	
	// *은 곱셈을 의미.
	int res = value * value;

	// pow(power series의 약자로 멱급수를 의미)
	// value의 제곱을 의미함
	// 맨 앞쪽을 보면 (int)라는 표현이 있다.
	// 원래 기본적으로 pow는 float이나 double을 대상으로 한다.
	// 그렇기 때문에 강제적으로 int 타입으로 형변환(Type Catsting)을 수행.

	res = (int)pow(value, 2);

	res = value * value * value * value;
	res = (int)pow(value, 4);

	printf("res = %d\n", res);

	return 0;

}