#include <stdio.h>

int main()
{
    int num1 = 7, num2 = 3;

    // if문을 작성하는 방법
    // 1. 먼저 if를 적고 괄호를 열고 닫는다.
    // 2. if의 괄호 안에 조건을 적는다.
    // 3. 괄호 다음에 중괄호를 열고 닫는다.
    // 4. if의 조건이 만족되었을 경우 어떤 작업을 할 것인지 중괄호 안에 적는다.

    if (num1 > num2)
    {
        printf("%d는 %d 보다 크다.\n", num1, num2);
    }

    return 0;
}

