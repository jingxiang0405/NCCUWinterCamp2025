#include <stdio.h>
int main(){
    int N, M;
    scanf("%d%d", &N, &M);
    int arr[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // 印出每橫排的加總
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < M; j++)
            sum += arr[i][j];
        printf("row %d: %d\n", i, sum);
    }

    printf("--\n");

    // 印出每直排的加總
    for (int j = 0; j < M; j++) {
        int sum = 0;
        for (int i = 0; i < N; i++)
            sum += arr[i][j];
        printf("col %d: %d\n", j, sum);
    }

    return 0;
}
