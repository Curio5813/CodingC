#include <stdio.h>
#include <string.h>


int main(){

    int t, n, valores[51][51], indice[51], calculo, respostas[51], cont, add, sub, mult, verf;

    char nada, igual, operacao[51];

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
        char jogadores[t][51];
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
        int k = 0;
        char nao_passa[t + 1][51];
        for(int i = 0; i < t + 1; i++) {
            if (i == t && respostas[i] == 0) {
                sprintf(nao_passa[k], "%s", jogadores[i]);
                break;
            }
            if (cont == 0) {
                printf("None Shall Pass!\n");
                break;
            }
            if (cont == t) {
                printf("You Shall All Pass!\n");
                break;
            }
            if (respostas[i] == 0) {
                sprintf(nao_passa[k], "%s", jogadores[i]);
                k += 1;
            }
        }
        if(cont != t && cont != 0) {
            char *vetor[] = {};
            for (int i = 0; i < k + 1; i++) {
                vetor[i] = nao_passa[i];
            }
            for (int i = 0; i < k + 1 - 1; i++) {
                for (int j = 0; j < k + 1 - i - 1; j++) {
                    if (strcmp(vetor[j], vetor[j + 1]) > 0) {
                        char *temp = vetor[j];
                        vetor[j] = vetor[j + 1];
                        vetor[j + 1] = temp;
                    }
                }
            }
            for (int i = 0; i < k + 1; i++) {
                if (i == k) {
                    printf("%s\n", vetor[i]);
                    break;
                }
                printf("%s ", vetor[i]);
            }
        }
    }

    return 0;
}
