#include <stdio.h>
#include <string.h>


int main(){

    int n, i, k, j, cont = 0, maior = 0;
    char movimento[120], movimentos[100000], temp;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s", movimento);
        if(i % 2 == 0){
            strcat(movimentos, movimento);
        }
        if(i % 2 == 1){
            for (k = 0, j = n - 1; k < j; k++, j--) {
                temp = movimento[k];
                movimento[k] = movimento[j];
                movimento[j] = temp;

            }
            strcat(movimentos, movimento);
        }
    }
    size_t tam = strlen(movimentos);
    for(i = 0; i < tam; i++){
        if(movimentos[i] == 'o'){
            cont += 1;
        }
        if(cont > maior){
            maior = cont;
        }
        if(movimentos[i] == 'A'){
            cont = 0;
        }
    }
    printf("%d\n", maior);

    return 0;
}
