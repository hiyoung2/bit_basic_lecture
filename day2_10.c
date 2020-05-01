#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int score;
    printf("점수를 입력하시오: ");
    scanf("%d", &score);

    score /= 10;

    switch (score)
    {
        case 10:
        case 9:
            printf("90 ~ 100점: A\n");
            break;
        case 8:
            printf("80 ~ 89점: B\n");
            break;
        case 7:
            printf("70 ~ 79점: C\n");
            break;      // 여기까지만 하고 아래로 가지 않음.
        case 6:
            printf("60 ~ 69점: D\n");
            break;
            // break를 적지 않으면 switch에서는 break를 만날때까지 아래로 진행한다.
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("따발총이다 두다다다다\n");
            break;
        default:
            printf("잘못된 점수를 입력하셨습니다.\n");
            break;
    }

    return 0;
}