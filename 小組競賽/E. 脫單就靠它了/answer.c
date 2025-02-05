#include <stdio.h>

int main() {
    int h;
    char element;
    
    // Read input
    scanf("%d %c", &h, &element);
    
    // Print the leaves of the tree
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("%c", element);
        }
        printf("\n");
    }
    
    // Print the trunk of the tree
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < h - 1; j++) {
            printf(" ");
        }
        printf("%c\n", element);
    }
    
    return 0;
}
