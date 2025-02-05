#include <stdio.h>
void printStr(char* s){
    printf("%s\n", s);
    return;
}

int main(){
    char s[] = "Hello, World";
    printStr(s);
    return 0;
}
