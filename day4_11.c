#include <stdio.h>
// malloc()�̶�� ���� �Ҵ��� ����ϱ� ���� ����Ѵ�.
#include <stdlib.h>
// C���� �ſ� �߿��� 4���� ���� �޸� ������ �ִ�.
// Stack - ���� ����(�Լ� ȣ�⸶�� ����� ��輱)
// Heap - malloc, calloc���� ���� �Ҵ����� ��ġ�� ����
// Data - ���� ������� static�� ��ġ�Ǵ� ����
// Text - ��� ��ġ�Ǵ� ����

// ����ü: Ŀ���� ������ Ÿ��
// ����ü�� ����� ���
// 1. struct�� �����ϰ� ����ü �̸��� ���´�.
// 2. ����ü �ȿ� ����ְ� ���� Ŀ���� ������ Ÿ�Ե��� ���´�.
// 3. struct _queue�� ���� ���� �δ㽺���ٸ�
//    typedef�� ����Ͽ� �ܼ�ȭ ��Ű�� �͵� ���� - ���� ����
// ex) typedef struct _queue queue
//     struct _queue�� ���°Ͱ� queue�� ���°��� �������� �ǹ���
struct _queue
{
    int data;
    // �ڱ� ���� ������
    struct _queue* link;
};

// type�� definition ���شٴ� �ǹ̷� struct _queue�� queue�� �������
typedef struct _queue queue;
// ���� �۾��� Ŀ���� ������ Ÿ���� �����(int ���� ���� ������ٰ� �����)

queue* get_queue_node(void)
{
    queue* tmp;
    // Heap�̶�� ������ �����Ҵ���
    // �Լ��� ���� ������ Stack�� �Ҵ��ϹǷ� ������ ���������
    // Heap�� �Ҵ������μ� �Լ��� ������ ������ ������ �� �ְ� �ȴ�.
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