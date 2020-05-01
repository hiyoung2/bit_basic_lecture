// 변수란 무엇일까?
// 특정한 데이터 타입을 저장할 수 있는 메모리 공간.
// 정보를 저장할 수 있는 공간임이 중요.

#include <stdio.h>

int main()
{
	// 변수 선언은 어떻게 할까?
	// 1. 우선 데이터 타입을 적는다.
	// - 데이터 타입이란?
	//	int, char, short, float, double, long double, 커스텀(struct test) 타입이 존재.
	//	 정수형(숫자)는 int, short, char
	//	문자형 char
	//	실수형(소수점)은 float, double, long double
	//	커스터 타입은 구조체 기반
	// 2. 변수의 이름을 적는다.
	//	주의 사항 : 변수의 이름은 모두가 구별 가능한 형태로 작성해야 한다.
	//	ex) 계좌라면 account라는 이름을 지어주는 것이 좋다.
	//	만약 변수 이름을 'dskfjslajd' 라고 만든다면 
	//	향후 코드가 길어졌을 때 이게 무엇을 하는 변수인지 파악하기 힘들다.
	// 3. 변수에 값을 할당한다.(선택사항)
	// 4. 세미콜론을 찍는다.

	float account;

	account = 3.3f; // 뒤에 f가 오는 것은 float 타입을 의미.

	double test = 7.7;

	// print format : 특정한 format을 가지고 있는 문자열을 출력한다.
	// %f는 float 타입을 출력함을 의미.
	// %lf는 long float으로 double 타입을 출력함을 의미.
	// '\n'은 개행 문자로 엔터를 의미.

	// printf(문자열, 변수1, 변수2);
	// 위와 같은 형태면 문자열에 %로 시작하는 포맷이 2개 필요하다.
	// %f에는 변수1이 들어가게 되고
	// *lf에는 변수2가 들어가게 된다.

	printf("account = %f, test = %lf\n", account, test);
	printf("account = %f, test = %;f\n", test, account);

	// 만약 소수점 둘째자리까지 표현하고 싶다면
	// 아래와 같이 % 뒤에 '.'을 붙이고 표현할 자릿수를 적는다.

	printf("account = %.2f, test = %.3lf\n", account, test);

	return 0;
}