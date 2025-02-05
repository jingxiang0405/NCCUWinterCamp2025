#include <stdio.h>
void printarr(int arr[], int N){
    for (int i=0; i<N; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int check(int cs[], int ph[], int N, int now){
    if (cs[now] & ph[now]){ // conflict
        // start moving ph
        int step = 0;
        while (1){
            step++;

            if (now - step < 0 && now + step >= N)
                return 0; // stuck

            // left
            if (now - step >= 0){
                if( !(ph[now - step]) && !cs[now - step] ){  // not conflict
                    ph[now - step] = 1;
                    ph[now] = 0;
                    return 1; // finish
                }
            }

            // right
            if (now + step < N){
                if( !ph[now + step] && !cs[now + step] ){  // not conflict
                    ph[now + step] = 1;
                    ph[now] = 0;
                    return 1; // finish
                }
            }
        }
    }
    else { // no conflict
        return 1; // finish
    }
}
int main(){
    int N;
    scanf("%d", &N);
    int cs[N];
    int ph[N];
    for (int i=0;i<N;i++)
        scanf("%d", cs+i);
    for (int i=0;i<N;i++)
        scanf("%d", ph+i);

    int num_places;
    scanf("%d", &num_places);
    int path[num_places];
    for (int i=0;i<num_places;i++)
        scanf("%d", path+i);
    
    for (int i=0; i<num_places; i++){
        printf("%d\n", path[i]);
        if (check(cs, ph, N, path[i])){
            printarr(cs, N);
            printarr(ph, N);
        }
        else {
            printf("STUCK!\n");
            break;
        }
    }
    return 0;
}
