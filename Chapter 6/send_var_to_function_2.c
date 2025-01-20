#include <stdio.h>
int a = 10, b = 6;
int myfun(int b){
    int c = a * a + b;
    a = c - 2;
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    return c;
}
int main(){
    int a = 3;
    b = 8;
    printf("%d\n", myfun(a));
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
