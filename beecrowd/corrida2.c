#include <stdio.h>


int main() {

    long long int n, m, soma = 0, idx, flag = 0, cont = 0;

    scanf("%lld %lld", &n, &m);
    long long int tempos_volta[n], tempos[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%lld", &tempos_volta[j]);
        }
        for (int j = 0; j < m; j++) {
            soma += tempos_volta[j];
        }
        tempos[i] = soma;
        soma = 0;
    }
    while(cont < 3){
        for(int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (tempos[i] <= tempos[j]) {
                    idx = i;
                    flag = 1;
                } else {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                //printf("%lld\n", tempos[i]);
                printf("%lld\n", idx + 1);
                tempos[idx] = 9999999999;
                cont += 1;
                if (cont >= 3) {
                    break;
                }
            }
        }
    }

    return 0;
}
