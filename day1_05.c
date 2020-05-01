// 전위, 후위 연산자
#include <stdio.h>

int main(){
    int num1 = 77, num2 = 33;
    
    // ++은 더하기 1과 같다.
    // --는 빼기 1과 같다.
    
    // 전위 연산자는 변수 앞에 ++이나 --가 온다.
    // 실행하기 전에 계산이 진행됨
    
    // 후위 연산자는 변수 뒤에 ++이나 --가 온다.
    // 실행 후에 계산이 진행된다.
    printf("num1 = %d, num2 = %d\n", num1++, ++num2);
    printf("num1 = %d, num2 = %d\n", num1++, ++num2);
    printf("num1 = %d, num2 = %d\n", num1++, ++num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
