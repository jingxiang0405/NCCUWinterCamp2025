#include <stdio.h>
void fun(){
    printf("%d\n", x); // error (x is not defined)
}
int main(){
    int x = 10;
    fun();
    printf("%d\n", x);
    return 0;
}
