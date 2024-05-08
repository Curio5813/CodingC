#include <stdio.h>
#include <string.h>


int main(){

    char texto[501];
    int tamanho;

    printf("");
    fgets(texto, sizeof(texto), stdin);
    tamanho = strlen(texto);

    if(tamanho <= 81){
        printf("YES\n");
    }
    if(tamanho > 81){
        printf("NO\n");
    }

    return 0;
}
