#include <stdio.h>
int main(void){
    int m,n,x,y;
    scanf("%d,%d",&m,&n);
    if(n==0){
        printf("Division by zero is not allowed一");
    }
    else{
        x = m/n;
        y = m%n;
        printf("%d,%d",x,y);
    }
}