#include <stdio.h>
#include <stdlib.h>


int main(){

    long long int r, p, q, maior = 0, tempo, posicao, idx1 = 0, idx2 = 0, sucesso = 0, descarte;

    scanf("%lld", &r);
    long long int  corredores[r][2];
    for(long long int i = 0; i < r; i++){
        for(long long j = 0; j < 2; j++) {
            scanf("%lld", &corredores[i][j]);
            // printf("%lld ", corredores[i][j]);
        }
    }
    scanf("%lld", &p);
    long long int fotos[p][3];
    for(long long int i = 0; i < p; i++){
        for(long long j = 0; j < 3; j++) {
            scanf("%lld", &fotos[i][j]);
            // printf("%lld ", fotos[i][j]);
            if(j == 2 && fotos[i][j] > maior){
                maior = fotos[i][j];
            }
        }
        // printf("\n");
    }
    //printf("%lld\n", maior);
    long long int instantes[r][2];
    int flag = 0;
    for(long long int i = 0; i < r; i++){
        tempo = 0;
        posicao = 0;
        while(posicao <= maior){
            if(tempo < corredores[i][0]){
                tempo += 1;
            }
            else if(tempo >= corredores[i][0]){
                tempo += 1;
                posicao += corredores[i][1];
            }
            for(long long int j = 0; j < r; j++){
                if(tempo != instantes[j][0] && posicao != instantes[j][1]){
                    flag = 1;
                }
            }
            if(flag == 1){
                instantes[idx1][0] = tempo;
                instantes[idx1][1] = posicao;
                flag = 0;
                idx1 += 1;
            }
        }
    }
    scanf("%lld", &q);
    long long int  querys[q][2];
    for(long long int i = 0; i < q; i++){
        for(long long j = 0; j < 2; j++) {
            scanf("%lld", &querys[i][j]);
            // printf("%lld ", querys[i][j]);
        }
        //printf("\n");
    }
    long long int instantes2[q][2];
    flag = 0;
    for(long long int i = 0; i < idx1; i++){
        for(long long j = 0; j < 2; j++){
            instantes2[i][j] = instantes[i][j];
            // printf("%lld ", instantes2[i][j]);
        }
        // printf("\n");
    }
    //printf("%lld\n", maior);
    for(long long int i = 0; i < q; i++) {
        tempo = 0;
        posicao = 0;
        //printf("%lld\n", maior);
        while (posicao <= maior) {
            if (tempo < querys[i][0]) {
                tempo += 1;
            } else if (tempo >= querys[i][0]) {
                tempo += 1;
                posicao += querys[i][1];
            }
            for (long long int j = 0; j < q; j++) {
                if (tempo != instantes2[j][0] && posicao != instantes2[j][1]) {
                    flag = 1;
                }
            }
            if (flag == 1) {
                instantes2[idx2][0] = tempo;
                instantes2[idx2][1] = posicao;
                flag = 0;
                idx2 += 1;
            }
        }
        //printf("%lld\n", idx2);
        for(long long int j = 0; j < p; j++){
            for(long long int k = 0; k < idx2; k++) {
                printf("%lld ", instantes2[j][k]);
                if (instantes2[k][0] == fotos[j][0] && fotos[j][1] <= instantes2[k][1] && instantes2[k][1] <= fotos[j][2]) {
                    sucesso += 1;
                    //printf("%lld\n", sucesso);
                    break;
                }
            }
            printf("\n");
        }
        descarte = q - sucesso;
        //printf("%lld %lld\n", sucesso, descarte);
        //printf("%lld\n", descarte);
        sucesso = 0;
    }
    return 0;
}