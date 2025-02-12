#include <stdio.h>
int multiply(int x, int y)
{
    return x * y;
}
int addTwoNumbers(int a,int b){
    return a+b;
}

int main(void){
    // 函数名(参数1,参数2,....)
    int result = multiply(3,5); // 15;
    printf("%d",result);

}