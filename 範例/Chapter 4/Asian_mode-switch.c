#include <stdio.h>

int main(){
    char id[30];
    int L;

    scanf("%s %d", id, &L);

    switch (L){
        case 1:
            printf("%s is a Beginner in this game.\n", id);
            break;
        case 2:
            printf("%s is a Proficient in this game.\n", id);
            break;
        case 3:
            printf("%s is a Master in this game.\n", id);
            break;
        case 99:
            printf("%s is an Asian in this game.\n", id);
            break;
    }

    return 0;
}
