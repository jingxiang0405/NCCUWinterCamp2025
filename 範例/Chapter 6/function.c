#include <stdio.h>
void A(){
    printf("You called A()\n");
}
int B(){
    printf("You called B()\n");
    return 3;
}
float C(){
    printf("You called C()\n");
    return 5.6;
}
int main(){
    A();
    printf("%d\n", B());
    printf("%f\n", C());
    return 0;
}
