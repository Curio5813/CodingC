#include <stdio.h>


int main(){

    int r, n, caso = 0;
    while ((scanf("%d %d", &r, &n))) {
        int sufixos = 1, flag = 0;
        if (r == 0 && n == 0) {
            break;
        }
        else{
            caso += 1;
            if(n >= r){
                printf("Case %d: 0\n", caso);
            }
            else{
                if(r > (n + n * 26)){
                    printf("Case %d: impossible\n", caso);
                }
                else if(n < r <= (n + n * 26)) {
                    r -= n;
                    if (r <= n) {
                        printf("Case %d: 1\n", caso);
                    } else {
                        r -= n;
                        sufixos += 1;
                        if (r <= n) {
                            printf("Case %d: %d\n", caso, sufixos);
                        } else {
                            while (n < r) {
                                r -= n;
                                sufixos += 1;
                                if (sufixos >= 26) {
                                    flag = 1;
                                    break;
                                }
                            }
                            if (flag == 1) {
                                printf("Case %d: 26\n", caso);
                            }
                            if (flag == 0) {
                                printf("Case %d: %d\n", caso, sufixos);
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
