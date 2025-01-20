#include <stdio.h>

int main(){
    int a, b;
    a = 6;
    b = 4;

    // Return 1 if the condition is true, 0 otherwise
    printf("%d\n", a == b);  // Checks if a is equal to b
    printf("%d\n", a > b);   // Checks if a is greater than b
    printf("%d\n", a < b);   // Checks if a is less than b
    printf("%d\n", a != b);  // Checks if a is not equal to b
    printf("%d\n", !(a != b));  // Checks the negation of a not equal to b
    printf("%d\n", a != b && a < b);  // Checks if a is not equal to b AND a is less than b
    printf("%d\n", a != b || a < b);  // Checks if a is not equal to b OR a is less than b

    return 0;
}
