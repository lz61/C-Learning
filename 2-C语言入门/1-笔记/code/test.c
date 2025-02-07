#include <stdio.h>
test(){
    printf("Hello World!");
}
int main() {
    int a = 5;
    int b = 2;
    int c = a %= b;
    printf("a = %d, c = %d\n", a, c);
    test();
    return 0;
}