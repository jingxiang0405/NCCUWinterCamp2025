#include <stdio.h>
void printArr(int a[]){
    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return;
}

int main(){
    int arr[5] = {2, 1, 7, 4, 5};
    printArr(arr);
    return 0;
}
