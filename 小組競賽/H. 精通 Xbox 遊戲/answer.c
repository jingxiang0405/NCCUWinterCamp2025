#include <stdio.h>

int main() {
    int N, monsterHP = 100;
    char sequence[101];

    // Input number of button presses and the sequence
    scanf("%d", &N);
    scanf("%s", sequence);

    // Calculate total damage
    int totalDamage = 0;
    for (int i = 0; i < N; i++) {
        switch (sequence[i]) {
            case 'A':
                totalDamage += 43;
                break;
            case 'B':
                totalDamage -= 38;
                break;
            case 'X':
                totalDamage += 27;
                break;
            case 'Y':
                totalDamage -= 21;
                break;
        }
    }

    // Determine game result
    if (totalDamage >= monsterHP) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

    return 0;
}
