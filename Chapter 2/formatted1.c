#include <stdio.h>

int main() {

    char my_name[50];  // string
    char place_of_residence[50];  // string
    int years;

    scanf("%s %s %d", my_name, place_of_residence, &years);
    printf("I am %s from %s. I have been living in Taipei for %d years.\n", my_name, place_of_residence, years);

    return 0;
}
