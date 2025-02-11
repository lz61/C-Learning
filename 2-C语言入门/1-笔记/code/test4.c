/*
#include <stdio.h>
int main(void){
    int a,b,min;
    scanf("%d,%d",&a,&b);
    min = (a<b)?a:b;
    printf("%d",min);
}
*/

#include <stdio.h>
int main(void){
    int a,b,c,d,min;
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    min=(a<b)?a:b;
    min=(min<c)?min:c;
    min=(min<d)?min:d;
    printf("%d",min);
}