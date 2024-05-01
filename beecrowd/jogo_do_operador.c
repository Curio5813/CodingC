#include <stdio.h>



int main(){

    int t, n, valores[51][51], indice[51], calculo, respostas[51], cont, add, sub, mult, verf;

    char nada, igual, jogadores[51][51], operacao[51];

    while(scanf("%d", &t) != EOF) {
        n = 0;
        cont = 0;
        verf = 0;
        for (int i = 0; i < t; i++) {
            scanf("%d", &valores[i][n]);
            scanf("%c", &nada);
            scanf("%d", &valores[i][n + 1]);
            scanf("%c", &igual);
            scanf("%d", &valores[i][n + 2]);
            n = 0;
        }
        for (int i = 0; i < t; i++) {
            scanf("%s", &jogadores[i][51]);
            scanf("%c", &nada);
            scanf("%d", &indice[i]);
            scanf("%c", &nada);
            scanf("%c", &operacao[i]);
        }
        respostas[0] = 99999;
        for (int i = 0; i < t; i++) {
            if (operacao[i] == '+') {
                calculo = valores[indice[i] - 1][0] + valores[indice[i] - 1][1];
                if (calculo == valores[indice[i] - 1][2]) {
                    respostas[i + 1] = 1;
                    cont += 1;
                } else {
                    respostas[i + 1] = 0;
                }
            }
            if (operacao[i] == '-') {
                calculo = valores[indice[i] - 1][0] - valores[indice[i] - 1][1];
                if (calculo == valores[indice[i] - 1][2]) {
                    respostas[i + 1] = 1;
                    cont += 1;
                } else {
                    respostas[i + 1] = 0;
                }
            }
            if (operacao[i] == '*') {
                calculo = valores[indice[i] - 1][0] * valores[indice[i] - 1][1];
                if (calculo == valores[indice[i] - 1][2]) {
                    respostas[i + 1] = 1;
                    cont += 1;
                } else {
                    respostas[i + 1] = 0;
                }
            }
            if(operacao[i] == 'I') {
                add = valores[indice[i] - 1][0] + valores[indice[i] - 1][1];
                sub = valores[indice[i] - 1][0] - valores[indice[i] - 1][1];
                mult = valores[indice[i] - 1][0] * valores[indice[i] - 1][1];
                if (add == valores[indice[i] - 1][2]) {
                    respostas[i + 1] = 0;
                    verf = 1;
                }
                if (sub == valores[indice[i] - 1][2]){
                    respostas[i + 1] = 0;
                    verf = 1;
                }
                if (mult == valores[indice[i] - 1][2]){
                    respostas[i + 1] = 0;
                    verf = 1;
                    printf("Ok3\n");
                }
                if(verf == 0) {
                    respostas[i + 1] = 1;
                    cont += 1;
                }
                if(verf == 1){
                    verf = 0;
                }
            }
        }
        /*
        for (int i = 0; i < t + 1; i++) {
            printf("%d ", respostas[i]);
        }
        printf("\n");
        for(int i = 0; i < t + 1; i++){
            printf("%s ", jogadores[i]);
        }
        printf("\n");
        printf("%d\n", cont);
         */
        for(int i = 0; i < t + 1; i++){
            if(i == t && respostas[i] == 0) {
                printf("%s\n", jogadores[i]);
                break;
            }
            if(i == t && respostas[i] == 1){
                printf("\n");
            }
            if(cont == 0){
                printf("None Shall Pass!\n");
                break;
            }
            if(cont == t){
                printf("You Shall All Pass!\n");
                break;
            }
            if(respostas[i] == 0){
                printf("%s ", jogadores[i]);
            }
        }
    }

    return 0;
}
