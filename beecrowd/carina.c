#include <stdio.h>


int main(){

    long long int quadrados_perfeitos[10001], q, l, r, n = 0;

    for(long long int i = 0; i <= 100000000; i++){
        if(n >= 10001){
            break;
        }
        quadrados_perfeitos[n] = i * i;
        n += 1;
    }
    scanf("%lld", &q);
    for(long long int i = 0; i < q; i++){
        long long int qtd = 0;
        int flag = 0;
        scanf("%lld %lld", &l, &r);
        for(long long int k = 0; k < 10001; k++){
            if(quadrados_perfeitos[k] > r){
                break;
            }
            if(quadrados_perfeitos[k] >= l){
                qtd += 1;
                l += 1;
                flag = 1;
            }
        }
        printf("%lld\n", qtd);
    }

    return 0;
}
