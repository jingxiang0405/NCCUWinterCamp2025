#include <stdio.h>
int main(){
    for (int i=0; i<3; i++){
        printf("i=%d\n", i);
        for (int j=0; j<5; j++){
            printf("  i=%d j=%d\n", i, j);
        }
    }
    return 0;
}

