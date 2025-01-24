#include <stdio.h>
#include <stdbool.h>
void testPointer(int *x){
    printf("x is %x\n", x);
    x=0;
    printf("x is %x\n", x);
}

int main(void)
{
    int a[4]={1,2,3,4};
    int *p = a+1;
    printf("%d\n",*p++);
    printf("%d\n",++(*p));
}
