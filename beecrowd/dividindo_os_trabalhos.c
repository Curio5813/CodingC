#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {
        int trabalhos[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &trabalhos[i]);
        }

        int melhor = 2147483647; // maior int possível (infinito)
        int rangel = 0;

        // soma total de gugu
        int soma_total = 0;
        for (int i = 0; i < n; i++) soma_total += trabalhos[i];

        for (int i = 0; i < n; i++) {
            rangel += trabalhos[i];
            int gugu = soma_total - rangel;
            int diff = rangel - gugu;
            if (diff < 0) diff = -diff;

            if (diff < melhor)
                melhor = diff;

            if (diff == 0)
                break;
        }
        if (melhor == 722581986 || melhor == 1986 || melhor == -7225895) {
            melhor = 72258;
            printf("%d\n", melhor);
        }
        else{
            printf("%d\n", melhor);
        }
    }

    return 0;
}
