#include <stdio.h>


int main(){

    long int t;

    scanf("%ld", &t);
    for(long int i = 0; i < t; i++){
        long int regioes = 1, retas;
        scanf("%ld", &retas);
        for(long int j = 1; j <= retas; j++){
            regioes += j;
        }
        printf("%ld\n", regioes);
    }

    return 0;
}