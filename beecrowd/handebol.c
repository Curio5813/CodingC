#include <stdio.h>


int main(){

    int n, m, jogadores = 0;

    scanf("%d %d", &n, &m);
    int gols[m];
    for(int i = 0; i < n; i++){
        int flag = 0;
        for(int j = 0; j < m; j++){
            scanf("%d", &gols[j]);
        }
        for(int j = 0; j < m; j ++){
            if(gols[j] == 0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            jogadores += 1;
        }
    }
    printf("%d\n", jogadores);

    return 0;
}
