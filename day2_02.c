// 관계연산자 - 비트연산자를 논리로 확장시킨 버전

#include <stdio.h>

int main()
{
    int num1, num2, num3, tmp;
    // num1 = 10 ---> num1은 10과 같다.
    // num1이라는 메모리 공간에 10이라는 값을 저장한다 [대입 개념]
    // num1 = num2 ---> num2 메모리 공간에 있는 값을 num1 메모리 공간에 저장한다 [대입 개념]
    num1 = 10;
    num2 = 20;
    num3 = 30;
    
    printf("num1 = %d, num2 = %d\n", num1, num2);
    tmp = num1;
    num1 = num2;
    num2 = tmp;
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // [참, 거짓을 판단해라]
    printf("num1 > num2 = %d\n", num1 > num2);
    printf("num1 < num2 = %d\n", num1 < num2);

    // [참, 거짓을 판단해라]
    printf("num1 >= num2 = %d\n", num1 >= num2);
    printf("num1 <= num2 = %d\n", num1 <= num2);

    // 같지 않냐 ? [질문 개념 - 참, 거짓을 판단해라]
    printf("num1 != num2 = %d\n", num1 != num2);
    // 같냐 ? [질문 개념 - 참, 거짓을 판단해라]
    printf("num3 == 30 = %d\n", num3 == 30);

    return 0;
}