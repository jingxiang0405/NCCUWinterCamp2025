#include <stdio.h>

int main(){
    int a, b, c, d;
    a = 3;
    b = 7;
    c = a + b;
    b = a * c;
    a = b / c;
    d = c % a;
    printf("%d %d %d %d\n", a, b, c, d);

    return 0;
}
