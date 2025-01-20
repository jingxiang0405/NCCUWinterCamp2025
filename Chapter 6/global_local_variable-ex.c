#include <stdio.h>
int s = 1;
void fun1(){
    int s = 2;
    s++;
    printf("in fun1(): s = %d\n", s);
    return;
}
void fun2(){
    printf("in fun2(): s = %d\n", s++);
    printf("in fun2(): s = %d\n", s);
    return;
}
int main(){
    printf("s = %d\n", s);
    fun1();
    printf("s = %d\n", s);
    fun2();
    printf("s = %d\n", s);
    return 0;
}
