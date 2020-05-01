#define _CRT_SECURE_NO_WARNINGS
// _CRT_SECURE_NO_WARNINGS를 강제로 0으로 설정하여 오류가 발생하지 않게 만듬
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("첫번째 정수를 입력하시오: ");
    scanf("%d", &num1);

    printf("두번째 정수를 입력하시오: ");
    scanf("%d", &num2);

    // 주의 사항: if문의 상단을 어떻게 배치하냐에 따라서
    // else문의 부등식이 변경될 수 있다.
    // 그러므로 if문을 작성할때는 조건을 면밀히 검토하면서 작성해야 한다.
    // [ 잘 하려면... 경험치가 누적되어야 함 ]

    if (num1 > num2)
    {
        printf("%d는 %d 보다 크다.\n", num1, num2);
    }
    else if(num1 < num2)
    {
        printf("%d는 %d 보다 작다.\n", num1, num2);
    }
    else    // num1 == num2
    {
        printf("%d와 %d는 같다.\n", num1, num2);
    }

    return 0;
}
