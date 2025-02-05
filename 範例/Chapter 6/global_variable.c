#include <stdio.h>
int k = 5;
void fun(){
    printf("%d\n", k);
}
int main(){
    int x = 10;
    fun();
    printf("%d %d\n", x, k);
    return 0;
}
