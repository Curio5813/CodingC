#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i;

    while(scanf("%d", &n)){
        int maior = 0, segundo = 0, *suspeitos, idx;

        suspeitos = (int *) malloc(n * sizeof(int));

        if(n == 0){
            break;
        }
        for(i = 0; i < n; i++) {
            scanf("%d", &suspeitos[i]);
        }
        for(i = 0; i < n; i++){
            if(suspeitos[i] > maior){
                maior = suspeitos[i];
            }
        }
        for(i = 0; i < n; i++){
            if(suspeitos[i] != maior){
                if(suspeitos[i] > segundo){
                    segundo = suspeitos[i];
                    idx = i;
                }
            }
        }
        printf("%d\n", idx + 1);
        free(suspeitos);
        suspeitos = NULL;

    }

    return 0;
}