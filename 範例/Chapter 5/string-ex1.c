#include <stdio.h>
int main(){
    char s1[] = "Hello, World";
    char s2[] = {'H', 'E', 'L', 'L', 'O', '\0'};

    printf("%c %c\n", s1[4], s2[1]);
    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}
