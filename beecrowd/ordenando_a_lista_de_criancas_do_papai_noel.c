#include <stdio.h>
#include <string.h>


int main(){

    int n, sim = 0, nao = 0;
    char comportamento, espaco, criancas[200][30], temp[30], mais = '+', menos = '-';

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%c %c %s", &espaco, &comportamento, criancas[i]);
        if(comportamento == mais){
            sim += 1;
        }
        if(comportamento == menos){
            nao += 1;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(criancas[j], criancas[j + 1]) > 0) {
                strcpy(temp, criancas[j]);
                strcpy(criancas[j], criancas[j + 1]);
                strcpy(criancas[j + 1], temp);
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%s\n", criancas[i]);
    }
    printf("Se comportaram: %d | Nao se comportaram: %d\n", sim, nao);

    return 0;
}
