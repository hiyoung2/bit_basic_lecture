
#include <stdio.h>
// 함수에서 배열을 리턴할 수 있는가 ?
// 지역변수로 선언한 배열을 리턴할 수 있는 방법이 있다.
// C++에서 특정 매서드만 접근을 허용하는 private 매서드를 C로 구현하는 기법중 하나다.

// int(*)[2] - 출력
// 함수 이름 - ret_arr
// int num - 입력
int(*ret_arr(int num))[2]
{
    // static 키워드 - 정적 변수
    // 해당 함수(ret_arr) 내에서만 전역 변수와 같이 동작
    // 이중 배열
    // arr[0][0]   arr[0][1]    arr[1][0]    arr[1][1]
    static int arr[2][2] = {{1, 2}, {3, 4}};
    arr[1][1] = num;
    return arr;
}

int main()
{
    // ret_arr 함수의 리턴값(출력)을 받기 위해 p는 리턴 타입과 동일해야 한다.
    // 변수에 값을 할당하지 않으면 쓰레기값(0xcccccccc)가 들어간 것을 볼 수 있었다.
    // 물론 실제로 저 값은 0xcc 라는 디버깅 instruction(CPU 명령어)에 해당한다.
    // 그러므로 잘못된 결과를 초래할 수 있어 강제로 0으로 설정해주는 부분이다.
    // NULL은 주소값 0을 의미한다.
    int(*p)[2] = NULL;
    p = ret_arr(7);

    // 받아온 p는 배열 자체의 주소이므로 아래와 같이 이중 배열을 출력하듯 사용할 수 있다.
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("p[%d][%d] = %d\n", i, j, p[i][j]);
        }
    }

    return 0;
}
