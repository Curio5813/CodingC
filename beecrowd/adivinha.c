#include <stdio.h>
#include <stdlib.h>


int main(){

    int n, qt, s, diff;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &qt, &s);
        int advinhacoes[qt], menor = 999, bool = 0, idx = 0;
        for(int j = 0; j < qt; j++){
            scanf("%d", &advinhacoes[j]);
        }
        for(int j = 0; j < qt; j++){
            if(advinhacoes[j] == s){
                printf("%d\n", j + 1);
                bool = 1;
                break;
            }
            diff = abs(s - advinhacoes[j]);
            if(diff < menor){
                menor = diff;
                idx = j;
            }
        }
        if(bool == 0){
            printf("%d\n", idx + 1);
        }
    }

    return 0;
}
