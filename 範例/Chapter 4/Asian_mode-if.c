#include <stdio.h>

int main(){
    char id[30];
    int L;

    scanf("%s %d", id, &L);

    if (L == 1){
        printf("%s is a Beginner in this game.\n", id); 
    }
    if (L == 2){
        printf("%s is a Proficient in this game.\n", id); 
    }
    if (L == 3){
        printf("%s is a Master in this game.\n", id); 
    }
    if (L == 99){
        printf("%s is an Asian in this game.\n", id);
    }

    return 0;
}
