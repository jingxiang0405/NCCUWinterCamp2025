#include <stdio.h>

int main(){
    int a, b;
    a = 6;
    b = 4;
    printf("%d %d\n", ++a, --b);  // Pre-increment a and pre-decrement b
    printf("%d %d\n", a++, b--);  // Post-increment a and post-decrement b
    printf("%d %d\n", a, b);      // Print the final values of a and b

    return 0;
}
