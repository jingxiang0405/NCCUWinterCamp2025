#include <stdio.h>

int main() {
    int grade = 62;

    if (grade >= 90) {
        printf("A\n");
    }
    else if (grade >= 75) {
        printf("B\n");
    }
    else if (grade >= 60) {
        printf("C\n");
    }
    else {
        printf("F\n");
    }

    return 0;
}
