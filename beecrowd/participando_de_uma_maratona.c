#include <stdio.h>
#include <stdlib.h>


int main(){

    int r, p, q, maior = 0, tempo, posicao, idx1 = 0, idx2, sucesso = 0, descarte;

    scanf("%d", &r);
    int  corredores[r][2];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < 2; j++) {
            scanf("%d", &corredores[i][j]);
            // printf("%lld ", corredores[i][j]);
        }
    }
    scanf("%d", &p);
    int fotos[p][3];
    for(int i = 0; i < p; i++){
        for(int j = 0; j < 3; j++) {
            scanf("%d", &fotos[i][j]);
            // printf("%lld ", fotos[i][j]);
            if(j == 2 && fotos[i][j] > maior){
                maior = fotos[i][j];
            }
        }
        // printf("\n");
    }
    int instantes[r][2];
    for(int i = 0; i < r; i++){
        tempo = 0;
        posicao = 0;
        printf("%d %d Ok1\n", maior, r);
        while(posicao <= maior){
            if(tempo < corredores[i][0]){
                tempo += 1;
            }
            else if(tempo >= corredores[i][0]){
                tempo += 1;
                posicao += corredores[i][1];
                instantes[idx1][0] = tempo;
                instantes[idx1][1] = posicao;
                printf("%d %d\n", instantes[idx1][0], instantes[idx1][1]);
                idx1 += 1;
            }
        }
    }
    printf("%d Ok2\n", maior);
    scanf("%d", &q);
    int  querys[q][2];
    for(int i = 0; i < q; i++){
        for(int j = 0; j < 2; j++) {
            scanf("%d", &querys[i][j]);
            //printf("%lld ", querys[i][j]);
        }
        //printf("\n");
    }
    for(int i = 0; i < q; i++) {
        tempo = 0;
        posicao = 0;
        idx2 = idx1;
        //printf("%lld %lld %lld\n", q, idx1, maior);
        int instantes2[q][2];
        for(int j = 0; j < idx1; j++){
            for(int k = 0; k < 2; k++){
                instantes2[j][k] = instantes[j][k];
                //printf("%lld ", instantes2[i][j]);
            }
            //printf("\n");
        }
        //printf("%lld\n", maior);
        while (posicao <= maior) {
            if (tempo < querys[i][0]) {
                tempo += 1;
            }
            if (tempo >= querys[i][0]) {
                tempo += 1;
                posicao += querys[i][1];
            }
            instantes2[idx2][0] = tempo;
            instantes2[idx2][1] = posicao;
            idx2 += 1;
            //printf("%lld\n", idx2);
        }
        for(int j = 0; j < p; j++){
            for(int k = 0; k < idx2; k++) {
                //printf("%lld ", instantes2[j][k]);
                if (instantes2[k][0] == fotos[j][0] && fotos[j][1] <= instantes2[k][1] && instantes2[k][1] <= fotos[j][2]) {
                    sucesso += 1;
                    //printf("%lld\n", sucesso);
                    break;
                }
            }
        }
        descarte = q - sucesso;
        printf("%d %d\n", sucesso, descarte);
        //printf("%lld\n", descarte);
        sucesso = 0;
    }
    return 0;
}
