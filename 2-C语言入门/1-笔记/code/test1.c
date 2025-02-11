#include <stdio.h>
int main(void){
    int x,y,z;
    scanf("x=%d,y=%d,z=%d",&x,&y,&z);
    if(x>y&&x>z){
        printf("max=%d",x);
    }
    else if(y>x&&y>z){
        printf("max=%d",y);
    }
    else{
        printf("max=%d",z);
    }
}