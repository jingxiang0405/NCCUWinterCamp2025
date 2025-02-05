#include <stdio.h>

int main(){
    char c;
    printf("Enter a character between (A-C): ");
    scanf("%c", &c);

    switch (c){
        case 'A':
            printf("You chose A!\n");
            break;
        case 'B':
            printf("You chose B!\n");
            break;
        case 'C':
            printf("You chose C!\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}
