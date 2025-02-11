#include <stdio.h>
int main(void){
float a[10]={1.2,7,5,1.8,1.6,0.8,4,1.0,6,2.2};
// for (int i=0; i<10; i++){
//     scanf("%d",&a[i]);    
// }
float sum=0, average=0;
for (int i=0; i<10; i++){
    sum = sum + a[i];
}
average= sum/10.0;
printf("%.2f\n",average);
for (int i=0; i<10; i++){
    if (a[i]< average){
        printf("%.1f\n",a[i]);
    }
}
}