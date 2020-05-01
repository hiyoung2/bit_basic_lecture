#include <stdio.h>
#include <math.h>

int main(){
    int num1 = 9, num2 = 12;
    int test = 2020;


    printf("num1 and num2 = %d\n", num1 & num2);

    printf("num1 or num2 = %d\n", num1 | num2); 

    printf("num1 xor num2 = %d\n", num1 ^ num2);

    
    printf("not num2 = %d\n", ~num2);
    
    printf("num << 1 = %d\n", num1 << 1);
    printf("num << num2 = %d\n", num1 << num2);
    
    printf("num >> 1 = %d\n", num1 >> 1);
    printf("num >> 2 = %d\n", num1 >> 2);
    
    printf("test를 32개씩 구분하고 싶음 = %d\n", test & ~(31));
    printf("%d\n", 7777 & ~(1023));
    
    return 0;
}


