#include <stdio.h>
#include <gmp.h>
#include <stdlib.h>

int main(){

    long long int n, m;

    while(scanf("%lld %lld", &n, &m)){
        long long int *capitulos;
        long long int minutos = 0;

        capitulos = (long long int*) malloc (n * sizeof(long long int));

        if(n == -1 && m == -1){
            break;
        }
        else{
            for(long long int i = 0; i < n; i++) {
                scanf("%lld", &capitulos[i]);
            }
        }
        for(long long int i = 0; i < n; i++){
            for(long long int j = 0; j <= i; j++){
                minutos += capitulos[j] * m;
            }
        }
        printf("%lld\n", minutos);
        free(capitulos);
        capitulos = NULL;
    }

    return 0;
}
