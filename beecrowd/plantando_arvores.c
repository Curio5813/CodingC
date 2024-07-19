#include <stdio.h>


int main(){

    long int n, i, j, x, tam;

    scanf("%ld", &n);
    long int arvores[n], temp;
    for(i = 0; i < n; i++){
        scanf("%ld", &arvores[i]);
    }
    tam = sizeof(arvores)/sizeof(arvores[0]);
    //printf("%ld\n", tam);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(arvores[i] > arvores[j]){
                temp = arvores[j];
                arvores[j] = arvores[i];
                arvores[i] = temp;
            }
        }
    }
    long int dias = arvores[0];
    //printf("%ld\n", dias);
    for(i = 0; i < n; i++){
        if(i >= tam - 1){
            break;
        }
        if(arvores[0] == arvores[i] && i == 1){
            x = i;
            while(arvores[x] == arvores[x + 1]){
                x += 1;
            }
            i = x;
            if(arvores[i] - arvores[i + 1] <= tam - 1){
                dias += 1;
            }
        }
        else{
            if(arvores[i] - arvores[i + 1] <= tam - 1){
                dias += 1;
            }
        }
    }
    printf("%ld\n", dias);

    return 0;
}
