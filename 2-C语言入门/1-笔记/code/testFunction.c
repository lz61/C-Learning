#include <stdio.h>
struct Person{
    char name[10];
    int age;
    float height;
};

int main(void){
    int x = 48; // char x = '0';
    float y = 48+1+0.2;
    printf("%f\n", y);
}