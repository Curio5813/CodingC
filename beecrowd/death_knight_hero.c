#include <stdio.h>
#include <string.h>


int main(){

    int n, tamanho;
    char batalhas[1000];

    scanf("%d", &n);

    int cont = n;

    for(int i = 0; i < n; i++){
        scanf("%s", &batalhas);
        tamanho = strlen(batalhas);
        for(int k = 0; k < tamanho; k++){
            if(batalhas[k] == 'C' && batalhas[k + 1] == 'D'){
                cont -= 1;
                break;
            }
        }
    }
    printf("%d\n", cont);

    return 0;
}
