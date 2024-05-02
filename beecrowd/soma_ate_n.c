#include <stdio.h>


int main(){

    long long int n, soma, qt, inicio;

    while(scanf("%lld", &n) != 0){
        inicio = 1;
        soma = 0;
        qt = 0;
        if(n == 0){
            printf("1\n");
        }
        if(n == 1){
            printf("1\n");
        }
        if(n > 1){
            for(long long int i = inicio; i <= n; i++){
                for(long long int k = i; k <= n; k++){
                    soma += k;
                    if(soma == n) {
                        qt += 1;
                        break;
                    }
                }
                soma = 0;
                inicio += 1;
            }
            printf("%lld\n", qt);
        }
    }

    return 0;
}
