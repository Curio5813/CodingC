#include <stdio.h>


int main(){

    long long int n;

    while(scanf("%lld", &n)) {
        if (n == 0) {
            break;
        } else {
            long long int bacias[n], rodadas = 0, soma = 0, verifica = 0, flag = 0, cont = 0;
            for (int i = 0; i < n; i++) {
                scanf("%lld", &bacias[i]);
                soma += bacias[i];
            }
            while (flag == 0) {
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < i; j++) {
                        if (i == 0) {
                            bacias[i] -= 1;
                        }
                        if (i > 0) {
                            if (bacias[i] == 0) {
                                break;
                            } else {
                                bacias[i] -= 1;
                                while (i > 0) {
                                    bacias[i - 1] += 1;
                                    i -= 1;
                                    rodadas += 1;
                                }
                            }
                        }
                    }
                }
                for (int i = 0; i < n; i++) {
                    verifica += bacias[i];
                    if(bacias[i] == 0){
                        cont += 1;
                    }
                }
                if(cont == n - 1){
                    break;
                }
                printf("\n");
                if (verifica == 0) {
                    flag = 1;
                }
            }
            printf("%lld\n", rodadas + soma);
        }
    }

    return 0;
}