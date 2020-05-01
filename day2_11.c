#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    // mult는 n을 결정하는 인자
    // tmp는 num이 마지막부터 시작하므로
    // 초기 1 부터 시작할 수 있도록 강제하는 임시 변수
    int mult, num, tmp = 1;
    printf("n의 배수를 설정하시오: ");
    scanf("%d", &mult);

    printf("몇 개까지 출력할까요 ? ");
    scanf("%d", &num);

    // while을 작성하는 방법
    // 사전적 의미는 ~을 하는 동안 [반복]
    // 1. while을 적고 괄호를 열고 닫는다.
    // 2. 반복의 조건을 괄호 안에 적는다.
    // 3. 중괄호를 열고 닫는다.
    // 4. 반복할 작업을 작성한다.

    // while문의 동작 과정
    // 1. 먼저 괄호 안에 있는 조건을 검사한다.
    // 2. 조건이 거짓이라면 while문 탈출
    //    조건이 참이라면 while문 내부(중괄호)로 진입
    // 3. 내부에 있는 코드들을 진행
    // 4. 1번부터 반복

    // 해당 코드에서 주의할 부분: 후위 연산자
    // 코드가 실행된 이후에 계산이 진행된다는 점을 상기하자!

    while (num-- > 0)
    {
        printf("mult의 배수 = %d\n", mult * tmp++);
    }

    return 0;
}
