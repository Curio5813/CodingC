#include <stdio.h>


int main(){

    int n, j, z, cont = 1;
    while(scanf("%d", &n)){
        int divida = 0, dividas[n];
        if(n == 0){
            break;
        }
        else{
            for(int i = 0; i < n; i++){
                scanf("%d %d", &j, &z);
                divida += j - z;
                dividas[i] = divida;
            }
            printf("Teste %d\n", cont);
            for(int i = 0; i < n; i++){
                printf("%d\n", dividas[i]);
            }
        }
        cont += 1;
        printf("\n");
    }

    return 0;
}