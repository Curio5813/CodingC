#include <stdio.h>


int main(){

    double notas[5], temp, soma = 0;

    for(int i = 0; i < 5; i++){
        scanf("%lf", &notas[i]);
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j ++){
            if(notas[i] > notas[j] && i != j && i < j) {
                temp = notas[i];
                notas[i] = notas[j];
                notas[j] = temp;
            }
        }
    }
    for(int i = 1; i < 4; i++){
        soma += notas[i];
    }
    printf("%.1lf\n", soma);


    return 0;
}
