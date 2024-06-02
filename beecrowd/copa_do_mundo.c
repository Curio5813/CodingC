#include <stdio.h>


int main(){

    char selecoes[16] = {'A', 'B', 'C', 'D', 'E', 'F',
                         'G', 'H', 'I', 'J', 'K', 'L',
                         'M', 'N', 'O', 'P'};
    char oitavas[8], quartas[4], semi[2], final[2];
    int m, n, i = 0, j = 0, k = 0, p = 0, r = 0, s = 0, t = 0, v = 0, cont = 0;

    while(scanf("%d %d", &m, &n)) {
        if(cont < 8) {
            if (m > n) {
                oitavas[i] = selecoes[j];
                i += 1;
                j += 2;
            }
            if (m < n) {
                oitavas[i] = selecoes[j + 1];
                i += 1;
                j += 2;
            }
        }
        if(cont >= 8 && cont < 12) {
            if (m > n) {
                quartas[k] = oitavas[p];
                k += 1;
            }
            if (m < n) {
                quartas[k] = oitavas[p + 1];
                k += 1;
            }
            p += 2;
        }
        if(cont >= 12 && cont < 14){
            if (m > n) {
                semi[r] = quartas[s];
                r += 1;
            }
            if (m < n) {
                semi[r] = quartas[s + 1];
                r += 1;
            }
            s += 2;
        }
        if(cont >= 14) {
            if (m > n) {
                final[v] = semi[t];
                printf("%c\n", final[v]);
                v += 1;
            }
            if (m < n) {
                final[v] = semi[t + 1];
                printf("%c\n", final[v]);
                v += 1;
            }
            t += 1;
        }
        cont += 1;
        if(cont >= 15){
            break;
        }

    }

    return 0;

}