#include <stdio.h>

int main() {
    int b1, h1, b2, h2;

    // Input
    scanf("%d %d %d %d", &b1, &b2, &h1, &h2);

    // Calculate the areas of the triangles
    int area1 = (b1 * h1) / 2;
    int area2 = (b2 * h2) / 2;

    // Output the areas
    printf("%d %d\n", area1, area2);

    // Compare the areas and output the result
    if (area1 == area2) {
        printf("Triangle 1 = Triangle 2\n");
    } else if (area1 > area2) {
        printf("Triangle 1 > Triangle 2\n");
    } else {
        printf("Triangle 1 < Triangle 2\n");
    }

    return 0;
}
