#include <stdio.h>


int main(){

    int p, primos[10], velocidade = 0, horas, dias, cont = 0;

    scanf("%d", &p);
    for(int i = p; p * 10 + 1; i++){
        for(int j = 2; j <= i + 1; j++){
            if(i % j == 0 && j == i){
                primos[cont] = j;
                cont += 1;
            }
            if(i % j == 0 && j != i){
                break;
            }
        }
        if(cont == 10){
            for(int j = 0; j < 10; j++){
                velocidade += primos[j];
            }
            horas = 60000000 / velocidade;
            dias = horas / 24;
            printf("%d km/h\n", velocidade);
            printf("%d h / %d d\n", horas, dias);
            break;

        }
    }

    return 0;
}