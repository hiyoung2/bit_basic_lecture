// ����, ���� ������
#include <stdio.h>

int main(){
    int num1 = 77, num2 = 33;
    
    // ++�� ���ϱ� 1�� ����.
    // --�� ���� 1�� ����.
    
    // ���� �����ڴ� ���� �տ� ++�̳� --�� �´�.
    // �����ϱ� ���� ����� �����
    
    // ���� �����ڴ� ���� �ڿ� ++�̳� --�� �´�.
    // ���� �Ŀ� ����� ����ȴ�.
    printf("num1 = %d, num2 = %d\n", num1++, ++num2);
    printf("num1 = %d, num2 = %d\n", num1++, ++num2);
    printf("num1 = %d, num2 = %d\n", num1++, ++num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
