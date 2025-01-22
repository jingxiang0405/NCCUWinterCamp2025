#include <stdio.h>
int main(){
    char name[100];
    char grade;

    scanf("%s %c", name, &grade);
    switch (grade){
        case 'A':
            printf("%s is excellent at Computer Science.\n", name);
            break;
        case 'B':
            printf("%s is good at Computer Science.\n", name);
            break;
        case 'C':
            printf("%s is fair at Computer Science.\n", name);
            break;
        case 'F':
            printf("%s is not good at Computer Science.\n", name);
            break;
    }
    return 0;
}