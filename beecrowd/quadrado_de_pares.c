#include <stdio.h>


int main(){

    long long int n, quadrado;

    scanf("%lld", &n);

    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            quadrado = i * i;
            printf("%d^2 = %lld\n", i, quadrado);
        }
    }

    return 0;
}
