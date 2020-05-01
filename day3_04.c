#include <stdio.h>

// 함수란 무엇인가 ?
//  2   -> [      ] -> 4
//  3   -> [      ] -> 27
// 입력 -> 함수본문 -> 출력
// 출력을 고려하는 부분들 - 1. 맨 앞의 int(출력의 데이터 타입)
//                          2. return 값(num1 + num2)
// 함수본문에서 고려해야할 부분들 - 1. 함수 이름(add) - 마음대로 만들어도 된다.
//                                  2. 함수 내부에서 어떤 동작을 할 것인지
// 입력을 고려하는 부분들 - 1. 함수 이름옆에 괄호가 열리는데 거기에 배치된다.
//                             주의점: 변수 선언시에는 int num1, num2 가 가능하지만
//                                     함수의 입력에서는 반드시 int num1, int num2 등으로
//                                     입력의 데이터 타입을 반드시 적어줘야 한다.


int add(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int res = add(3, 7);
    printf("res = %d\n", res);

    return 0;
}
