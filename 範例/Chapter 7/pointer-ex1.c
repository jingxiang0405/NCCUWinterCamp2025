#include <stdio.h>
int main(){
    int A = 3;
    int *ptrA = &A;

    printf("%d\n", *ptrA);
    *ptrA = 50;
    printf("%d\n", A);
}
