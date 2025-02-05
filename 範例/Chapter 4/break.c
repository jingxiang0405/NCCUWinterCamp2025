#include <stdio.h>
int main(){
    int x;
    for (x=0; x<10; x++){
        if (x==5){
            break;
        }

        printf("%d ", x);
    }
    printf("\nBreak out of loop at x==%d\n", x);

    return 0;
}
