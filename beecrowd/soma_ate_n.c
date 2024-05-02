#include <stdio.h>
#include <math.h>


int main(){

    long long int n, soma, qt, inicio;

    while(scanf("%lld", &n) != 0){
        inicio = 1;
        soma = 0;
        qt = 1;
        if(n == 0){
            printf("1\n");
        }
        if(n == 1){
            printf("1\n");
        }
        long long int limite = (n / 2);
        if(n > 1){
            for(long long int i = inicio; i <= limite + 1; i++){
                for(long long int k = i; k <= limite + 1; k++){
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
