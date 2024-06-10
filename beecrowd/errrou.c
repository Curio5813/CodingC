#include <stdio.h>
#include <stdlib.h>


int main(){

    int c, num1, num2, resultado, soma, sub, mult, diff;
    char sinal, igualdade, menos = '-', mais = '+', multi = 'x';

    scanf("%d", &c);
    for(int i = 0; i < c; i++){
        int cont = 0;
        scanf("%d %c %d %c %d", &num1, &sinal, &num2, &igualdade, &resultado);
        if(sinal == mais){
            soma = num1 + num2;
            diff = abs(soma - resultado);
            char r[diff];
            while(cont < diff){
                r[cont] = 'r';
                cont += 1;
            }
            printf("E");
            for(int j = 0; j < diff; j++){
                printf("%c", r[j]);
            }
            printf("ou!\n");

        }
        if(sinal == menos){
            sub = abs(num1 - num2);
            diff = abs(sub - resultado);
            char r[diff];
            while(cont < diff){
                r[cont] = 'r';
                cont += 1;
            }
            printf("E");
            for(int j = 0; j < diff; j++){
                printf("%c", r[j]);
            }
            printf("ou!\n");

        }
        if(sinal == multi){
            mult = num1 * num2;
            diff = abs(mult - resultado);
            char r[diff];
            while(cont < diff){
                r[cont] = 'r';
                cont += 1;
            }
            printf("E");
            for(int j = 0; j < diff; j++){
                printf("%c", r[j]);
            }
            printf("ou!\n");

        }
    }

    return 0;
}
