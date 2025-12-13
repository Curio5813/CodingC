#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int total = 2 * N;
    int aranhas[38]; // máximo 2*N = 38
    for (int i = 0; i < total; i++)
        aranhas[i] = i + 1;

    for (long long K = 1; ; K++) {
        int vivos[38];
        int n_vivos = total;
        for (int i = 0; i < total; i++)
            vivos[i] = aranhas[i];

        int n_mortas = 0;
        int pos = 0;
        int venceu = 1;

        while (n_mortas < N) {
            pos = (pos + K - 1) % n_vivos;

            if (vivos[pos] <= N) { // se for vermelha, perde
                venceu = 0;
                break;
            }

            // eliminar aranha marrom
            for (int i = pos; i < n_vivos - 1; i++)
                vivos[i] = vivos[i + 1];
            n_vivos--;
            n_mortas++;
        }

        if (venceu) {
            printf("%lld\n", K);
            break;
        }
    }

    return 0;
}
