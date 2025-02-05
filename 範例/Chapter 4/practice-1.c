#include <stdio.h>
#include <stdlib.h> // 亂數相關函數
#include <time.h>   // 時間相關函數
int main(){
    srand( time(NULL) ); // 此題必要
    int ans = rand() % 100 + 1; // 取得1~100隨機整數

    int cnt = 0;

    while (1){
        int input;
        scanf("%d", &input);
        cnt++;

        if (input > ans){
            printf("Too Big\n");
        }
        else if (input < ans){
            printf("Too Small\n");
        }
        else {
            printf("BINGO!\n");
            break;
        }
    }

    printf("You gussed %d times\n", cnt);


    return 0;
}
