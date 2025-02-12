#include <stdio.h>
int main(void){
    int a=2;
    int *p = &a;
    int **pp = &p;
    *p = 3;
    printf("%d",a);
    // printf("a=%d\n",a);
    // printf("p=%x\n",p);
    // printf("*pp=%x\n",*pp);
}

