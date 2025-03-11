#include <stdio.h>


int main(){

    int n;
    float razao, soma = 0, denominador;

    printf("Quantos termos tera a série: ");
    scanf("%d", &n);
    printf("\n");

    for(int i = 1; i <= n; i++){
        razao = 1 / (float) i;
        soma += razao;

    }
    printf("%.3f", soma);


    return 0;

}
