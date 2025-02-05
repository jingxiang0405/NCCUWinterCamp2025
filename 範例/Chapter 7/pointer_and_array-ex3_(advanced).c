#include <stdio.h>
int main(){
    int arr[5] = {9, 3, 1, 0, 8};
    int *ptr = arr;
    printf("%d\n", *ptr);
    printf("%d\n", *ptr+1); // (*ptr)+1
    printf("%d\n", *ptr++);
    printf("%d\n", *ptr);
    printf("%d\n", ++*ptr);
    printf("%d\n", *++ptr);
    for (int i=0; i<5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
