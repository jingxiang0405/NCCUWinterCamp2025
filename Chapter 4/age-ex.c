#include <stdio.h>
int main(){
    int age;
    scanf("%d", &age);

    if (age >= 65){
        printf("Elderly\n");
    }
    else if (age >= 18){
        printf("Adult\n");
    }
    else if (age >= 13){
        printf("Teenager\n");
    }
    else {
        printf("Child\n");
    }

    return 0;
}