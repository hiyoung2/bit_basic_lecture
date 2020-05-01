#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 전역 변수 - 어떤 구간에서든 사용할 수 있는 변수
// 지역 변수 - 함수 구간 내에서만 사용할 수 있는 변수
int num1, num2;

// 입력을 받는 함수를 작성해보자!
// 입력 부분이 비어 있으면 void를 의미한다.
// 즉 입력도 출력도 없음을 의미한다.
void input()
{
    printf("첫 번째 정수를 입력하시오: ");
    scanf("%d", &num1);

    printf("두 번째 정수를 입력하시오: ");
    scanf("%d", &num2);
}

// 대소 비교를 수행하는 함수를 작성해보자! - 큰 숫자를 출력하도록 하자!
int find_max()
{
    if (num1 > num2)
    {
        printf("num1(%d)가 num2(%d) 보다 크다.\n", num1, num2);
        return num1;
    }
    else if (num1 < num2)
    {
        printf("num1(%d)가 num2(%d) 보다 작다.\n", num1, num2);
        return num2;
    }
    else
    {
        printf("num1(%d)과 num2(%d)가 같다.\n", num1, num2);
        return 0;
    }
}

int main()
{
    int res;

    input();

    if (!(res = find_max()))
    {
        printf("대소 비교가 불가합니다. 다시 입력해주세요 ~\n");
        return -1;
        // 이 시점에서 main 함수를 강제로 종료하겠습니다.
    }

    printf("max값은 ? %d\n", res);

    return 0;
}
