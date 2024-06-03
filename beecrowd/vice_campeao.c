#include <stdio.h>


int main(){

    int jogadores[3], tem;

    for(int i = 0; i < 3; i++){
        scanf("%d", &jogadores[i]);
        }
    for(int i = 0; i < 3 - 1; i++){
        for(int j = 0; j < 3 - i - 1; j++){
            if(jogadores[j] > jogadores[j + 1]){
                tem = jogadores[j];
                jogadores[j] = jogadores[j + 1];
                jogadores[j + 1] = tem;
            }
        }
    }
    printf("%d\n", jogadores[1]);

    return 0;
}
