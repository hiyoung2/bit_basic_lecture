#define _CRT_SECURE_NO_WARNINGS
// _CRT_SECURE_NO_WARNINGS를 강제로 0으로 설정하여 오류가 발생하지 않게 만듦.

#include <stdio.h>

int main()
{
    int num1, num2;

    // scanf()의 사용법
    // 첫번째 인자에 %d, %f, %lf, %c 등등이 올 수 있다.
    // 주의할점이라면 반드시 쌍따옴표로 처리해야한다.(키보드 입력이 문자열 형태로 들어가서 그렇다.)
    // 뒤에는 입력한 값을 받을 변수를 설정한다.
    // 주의사항 : 변수의 주소를 설정해야 한다.
    // 지금 당장은 무조건 변수에 '&'를 붙여야 한다고만 기억하자.
    // 향후 포인터 개념이 나오면서 이 의문이 완벽하게 해소될 것.

    printf("첫번째 정수를 입력하시오: ");
    scanf("%d", &num1);

    printf("두번째 정수를 입력하시오: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d는 %d 보다 크다.\n", num1, num2);
    }

    return 0;
}
