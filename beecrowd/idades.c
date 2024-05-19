#include <stdio.h>


int main(){

    int idades, soma = 0;
    double media, cont = 0;

    while(scanf("%d", &idades) >= 0){
        if(idades < 0){
            break;
        }
        soma += idades;
        cont += 1.0;
    }
    media = soma / cont;
    printf("%.2lf\n", media);

    return 0;
}