#include <stdio.h>


int main(){

    long long int n, caso = 1, vetor[1000000] = {0}, veri;

    while(scanf("%lld", &n) != EOF){
        long long int cont = 1;
        long long int qt = 1;
        long long int num = 0;
        long long int k = 1;
        printf("Caso %lld: ", caso);
        for(int i = 0; i <= n; i++) {
            while (cont < num) {
                if (cont == num - 1) {
                    vetor[k] = num;
                    cont += 1;
                    k += 1;
                    break;
                }
                vetor[k] = num;
                k += 1;
                cont += 1;
            }
            num += 1;
            cont = 0;
            if (num > n) {
                if(n == 0){
                    printf("%lld numero\n", k);
                }
                if(n != 0){
                    printf("%lld numeros\n", k);
                }
                for (int j = 0; j < k; j++) {
                    if (j == k - 1) {
                        printf("%lld", vetor[j]);
                        break;
                    }
                    printf("%lld ", vetor[j]);
                }
                caso += 1;
                printf("\n\n");
                break;
            }
        }
    }

    return 0;
}
