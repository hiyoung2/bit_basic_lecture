#include <stdio.h>
// malloc()이라는 동적 할당을 사용하기 위해 사용한다.
#include <stdlib.h>
// C언어에는 매우 중요한 4가지 가상 메모리 영역이 있다.
// Stack - 지역 변수(함수 호출마다 만드는 경계선)
// Heap - malloc, calloc등의 동적 할당으로 배치된 공간
// Data - 전역 변수들과 static이 배치되는 공간
// Text - 기계어가 배치되는 공간

// 구조체: 커스텀 데이터 타입
// 구조체를 만드는 방법
// 1. struct를 선언하고 구조체 이름을 적는다.
// 2. 구조체 안에 묶어넣고 싶은 커스텀 데이터 타입들을 적는다.
// 3. struct _queue를 적는 것이 부담스럽다면
//    typedef를 사용하여 단순화 시키는 것도 좋다 - 선택 사항
// ex) typedef struct _queue queue
//     struct _queue로 쓰는것과 queue로 쓰는것이 동일함을 의미함
struct _queue
{
    int data;
    // 자기 참조 포인터
    struct _queue* link;
};

// type을 definition 해준다는 의미로 struct _queue를 queue로 만들어줌
typedef struct _queue queue;
// 위의 작업은 커스텀 데이터 타입을 만드것(int 같은 것을 만들었다고 보면됨)

queue* get_queue_node(void)
{
    queue* tmp;
    // Heap이라는 공간에 동적할당함
    // 함수의 지역 변수는 Stack에 할당하므로 정보가 사라지지만
    // Heap에 할당함으로서 함수가 끝나도 정보를 유지할 수 있게 된다.
    tmp = (queue*)malloc(sizeof(queue));
    tmp->link = NULL;
    return tmp;
}

// int num = 3;
// int *p = &num;
// int **p = &p;
// printf("**p = %d\n", **p);
void enqueue(queue** head, int data)
{
    if (!(*head))
    {
        *head = get_queue_node();
        (*head)->data = data;
        return;
    }

    enqueue(&(*head)->link, data);
}

void print_queue(queue* head)
{
    queue* tmp = head;

    while (tmp)
    {
        printf("data = %d\n", tmp->data);
        tmp = tmp->link;
    }
}

int main(void)
{
    int i;
    queue* head = NULL;
    
    for (i = 1; i < 4; i++)
    {
        enqueue(&head, i * 10);
    }

    print_queue(head);

    return 0;
}