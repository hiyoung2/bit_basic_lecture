#include <stdio.h>
// srand(time(NULL))과 rand()를 사용하기 위한 헤더 파일들
#include <stdlib.h>
#include <time.h>
// 수학 라이브러리
#include <math.h>
/*
이중 배열을 만들어보자!
2D 좌표에서 x, y 정보를 얻었고 - 작은 박스에는 2개의 데이터가 들어간다.
이 정보들을 기반으로 현재 위치에서 제일 가까운 점을 찾으려고 한다.
얻은 좌표들은 배터리를 충전할 수 있는 위치다.
해당 위치는 총 7개가 있다. - 작은 박스가 7개 있다.
이를 프로그래밍 해보자!
힌트 - sqrt(x) == 루트 x와 동일하며 math.h를 include해야 사용할 수 있음
int location[7][2];
*/
// int(*)[2] init_arr(void);
//   출력 - int(*)[2]: 작은 박스에 2개가 들어가는 모든 배열
// 함수 이름 - init_arr
//   입력 - void
int(*init_arr(void))[2]
{
    int i, j;
    static int location[7][2];

    // rand()를 무작위로 만들기 위한 전처리
    srand(time(NULL));

    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            // rand() 랜덤값을 뽑아냄
            location[i][j] = rand() % 5 + 1;    // 0 ~ 4 -> 1 ~ 5
        }
    }

    return location;
}

float* find_min(int(*loc)[2], int* current)
{
    int i, j;
    static float dist[7] = { 0 };
    // sqrt[ (x - x1)^2 + (y - y1)^2 ]
    for (i = 0; i < 7; i++)
    {
        dist[i] = sqrt(pow((current[0] - loc[i][0]), 2) + pow((current[1] - loc[i][1]), 2));
    }

    return dist;
}

//int(*)[2] p;
int(*p2)[2];

int main()
{
    int i;
    float *dist;
    int(*loc)[2] = NULL;
    int current[2] = {3, 3};
    loc = init_arr();
    dist = find_min(loc, current);

    for (i = 0; i < 7; i++)
    {
        printf("dist = %f\n", dist[i]);
    }

    return 0;
}
