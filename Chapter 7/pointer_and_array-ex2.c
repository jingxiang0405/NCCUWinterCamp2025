#include <stdio.h>
int main(){
    int arr[5] = {9, 3, 1, 0, 8};
    printf("%d\n", *(arr+1));
    printf("%d\n", *arr+1); // (*arr)+1

    return 0;
}
