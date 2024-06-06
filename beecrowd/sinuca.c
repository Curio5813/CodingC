#include <stdio.h>


int main(){

    int n, bolas, cont = 0, bases[100][100], ultima_bola;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int k = 0; k < n - cont; k++){
            if(i == 0){
                scanf("%d", &bases[i][k]);
            }
            else{
                bases[i][k] = 0;
            }
        }
        cont += 1;
    }
    cont = 0;
    for(int i = 0; i < n; i++){
        for(int k = 0; k < n - cont; k++){
            if(k >= n - cont - 1){
                break;
            }
            if(bases[i][k] == 1 && bases[i][k + 1] == 1 || bases[i][k] == -1 && bases[i][k + 1] == -1){
                bases[i + 1][k] = 1;
            }
            else{
                bases[i + 1][k] = -1;
            }
        }
        if(i >= n - 1){
            ultima_bola =  bases[n - 1][0];
            if(ultima_bola == -1){
                printf("branca\n");
            }
            if(ultima_bola == 1){
                printf("preta\n");
            }
            break;
        }
        cont += 1;
    }

    return 0;
}
