#include <stdio.h>
int globalVar = 10;
void func();
int main(){
    int localVar = 20;
    func();
    printf("globalVar = %d\n", globalVar++);
    printf("localVar = %d\n", localVar);
    return 0;
}
void func(){
    int localVar = 30;
    printf("globalVar = %d\n", globalVar++);
    printf("localVar = %d\n", localVar);
    return;
}
