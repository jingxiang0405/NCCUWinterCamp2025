#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int A = N - (N/2000)*200;
    int B = N - (N/1000)*100;
    if (A <= B)
        printf("%d 0\n", A);
    else
        printf("%d 1\n", B);
    return 0;
}
