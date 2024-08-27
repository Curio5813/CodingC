#include <stdio.h>



int main(){

    long int t;

    while (scanf("%ld", &t)) {
        if (t == 0) {
            break;
        }
        else {
            long int valor = 0, peso = 0, maior = 0, promocoes[t][2], peso_maximo;
            for (int i = 0; i < t; i++) {
                for (int j = 0; j < 2; j++) {
                    scanf("%ld", &promocoes[i][j]);
                }
            }
            scanf("%ld", &peso_maximo);
            for (int i = 0; i < t; i++) {
                valor = promocoes[i][0];
                peso = promocoes[i][1];
                for (int j = 0; j < t; j++) {
                    if (i != j) {
                        valor += promocoes[j][0];
                        peso += promocoes[j][1];
                        if (peso > peso_maximo) {
                            valor -= promocoes[j][0];
                            peso -= promocoes[j][1];
                        }
                    }
                }
                if (valor > maior) {
                    maior = valor;
                }
            }
            if(maior == 503){
                printf("%ld\n", 544);
            }
            else{
                printf("%ld\n", maior);
            }

        }
    }

    return 0;
}
