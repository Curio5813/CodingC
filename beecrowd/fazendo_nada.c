#include <stdio.h>
#include <gmp.h>

int main(){

    long long int n, m;

    while(scanf("%lld %lld", &n, &m)){
        long long int capitulos[n];
        mpz_t minutos;
        mpz_t temp1;
        mpz_t temp2;
        mpz_t serie;
        mpz_init(minutos);
        mpz_init(temp1);
        mpz_init(temp2);
        mpz_init(serie);
        char input[1024];

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
                mpz_set_ui(temp1, capitulos[i]);
                mpz_mul(serie, temp1, (mpz_srcptr) capitulos[j]);

            }
        }
        gmp_printf("%Zd\n", serie);
        mpz_clear(serie);
        mpz_clear(temp1);

    }

    return 0;
}
