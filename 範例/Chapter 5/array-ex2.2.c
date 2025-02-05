#include <stdio.h>
int main(){
    int arr[4];
    for (int i=0; i<4; i++){
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    for (int i=0; i<4; i++){
        sum += arr[i];
    }

    printf("sum = %d\n", sum);
    printf("avg = %.2lf\n", (double)sum/4);
    return 0;
}
