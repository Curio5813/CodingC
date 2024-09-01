#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>


int main(){

    int n, m;

    while(scanf("%d %d", &n, &m)) {
        if (n == -1 && m == -1) {
            break;
        }
        mpz_t num1, num2, num3, minutos, produto;
        mpz_init_set_ui(num1, 1);
        mpz_init_set_ui(num2, 0);
        mpz_init_set_ui(num3, m);
        mpz_t *capitulos_gmp = (mpz_t *)malloc(n * sizeof(mpz_t));
        if (n == -1 && m == -1) {
            break;
        } else {
            for (int i = 0; i < n; i++) {
                mpz_init(capitulos_gmp[i]);
            }
            for (int i = 0; i < n; i++) {
                gmp_scanf("%Zd", capitulos_gmp[i]);
            }
            mpz_set(produto, num1);
            mpz_set(minutos, num2);
            for (int i = 0; i < n; i++) {
                for (int j = 0; j <= i; j++) {
                    mpz_mul(produto, capitulos_gmp[j], num3);
                    mpz_add(minutos, minutos, produto);
                }
            }
            gmp_printf("%Zd\n", minutos);
            mpz_clear(minutos);
            mpz_clear(produto);
            mpz_clear(capitulos_gmp[n]);
        }
    }

    return 0;
}

