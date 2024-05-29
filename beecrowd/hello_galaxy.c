#include <stdio.h>
#include <string.h>


int main(){

    int n;

    while(scanf("%d", &n)){
        char civilizacao[100][100], primeiro[100];
        int ano, duracao, mais_antiga = 10000;
        if(n == 0){
            break;
        }
        else{
            for(int i = 0; i < n; i++){
                scanf("%s %d %d", civilizacao[i], &ano, &duracao);
                if((ano - duracao) <= mais_antiga) {
                    strcpy(primeiro, civilizacao[i]);
                    mais_antiga = ano - duracao;
                }
            }
            printf("%s\n", primeiro);
        }

    }

    return 0;
}