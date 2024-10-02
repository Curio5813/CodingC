#include <stdio.h>


int main(){

    long int n, total = 0, soma = 0, cont = 0;

    scanf("%ld", &n);
    long int secoes[n];
    for(int i = 0; i < n; i++){
        scanf("%ld", &secoes[i]);
        total += secoes[i];
    }
    for(int i = 0; i < n; i++){
        soma += secoes[i];
        cont += 1;
        if(soma == total / 2){
            break;
        }
    }
    printf("%ld\n", cont);

    return 0;
}
