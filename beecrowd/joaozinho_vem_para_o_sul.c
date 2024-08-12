#include <stdio.h>


int main(){

    long long int i, f, n, caminhao, usado[1000000], qtd;

    while(scanf("%lld %lld %lld", &i, &f, &n)){
        if(i == 0 && f == 0 & n == 0){
            break;
        }
        else {
            qtd = 0;
            long int idx = 0;
            for (int j = 0; j < n; j++) {
                int flag = 1;
                scanf("%lld", &caminhao);
                for (long long int k = i; k <= f; k++) {
                    if (k % caminhao == 0) {
                        for (long long l = 0; l <= idx; l++) {
                            if (k == usado[l]) {
                                flag = 0;
                            }
                        }
                        if (flag == 1) {
                            usado[idx] = k;
                            qtd += usado[idx];
                            idx += 1;
                        }
                        if(flag == 0){
                            flag = 1;
                        }
                    }
                }
            }
            printf("%lld\n", qtd % 1300031);
        }
    }

    return 0;
}
