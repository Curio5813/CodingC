#include <stdio.h>
#include <stdlib.h>


int main(){

    int jogadores[4], temp, diff;

    scanf("%d %d %d %d", &jogadores[0], &jogadores[1], &jogadores[2], &jogadores[3]);

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i == j){
                break;
            }
            if(jogadores[i] < jogadores[j]){
                temp = jogadores[i];
                jogadores[i] = jogadores[j];
                jogadores[j] = temp;
            }
        }
    }
    diff = abs((jogadores[1] + jogadores[2]) - (jogadores[0] + jogadores[3]));
    printf("%d\n", diff);

    return 0;
}
