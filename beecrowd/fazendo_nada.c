#include <stdio.h>


int main(){

    long long int n, m;

    while(scanf("%lld %lld", &n, &m)){
        long long int capitulos[n], minutos = 0;
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
        // teste
    }

    return 0;
}
