#include <stdio.h>
int gcd(int a, int b){
    while (b != 0){
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main(){
    int a = 30, b = 18;
    printf("%d\n", gcd(a, b));
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
