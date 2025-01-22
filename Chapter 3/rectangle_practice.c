#include <stdio.h>
int main(){
    int L1, L2;
    scanf("%d %d", &L1, &L2);
    int A1 = L1 * L2;
    int P1 = 2 * (L1 + L2);

    int A2 = 4 * A1;
    int P2 = 2 * ((2*L1) + (2*L2));

    printf("%d %d %d %d\n", A1, P1, A2, P2);

    return 0;
}