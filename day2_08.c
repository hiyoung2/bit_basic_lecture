#define _CRT_SECURE_NO_WARNINGS
// _CRT_SECURE_NO_WARNINGS를 강제로 0으로 설정하여 오류가 발생하지 않게 만듦.

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("첫번째 정수를 입력하시오: ");
    scanf("%d", &num1);

    printf("두번째 정수를 입력하시오: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d는 %d 보다 크다.\n", num1, num2);
    }
    else  // num1 <= num2
    {
        printf("%d는 %d 보다 작다.\n", num1, num2);
    }

    return 0;
}
