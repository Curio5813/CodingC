#include <stdio.h>
#include <string.h>


int main(){

    int n;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        char cartas[n][1003];
        scanf("%s", cartas[i]);
        size_t tam = strlen(cartas[i]);
        int bool_a = 0, bool_k = 0, bool_q = 0, bool_j = 0;
        for(int j = 0; j < tam; j++) {
            if (cartas[i][j] == 'A') {
                bool_a = 1;
            }
            if (cartas[i][j] == 'K') {
                bool_k = 1;
            }
            if (cartas[i][j] == 'Q') {
                bool_q = 1;
            }
            if (cartas[i][j] == 'J') {
                bool_j = 1;
            }
        }
        if(bool_a == 1 && bool_k == 1 && bool_q == 1 && bool_j == 1){
            printf("Aaah muleke\n");
        }
        else{
            printf("Ooo raca viu\n");
        }
    }

    return 0;
}
