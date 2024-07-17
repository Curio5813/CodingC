#include <stdio.h>


int main(){

    int c, n;

    scanf("%d", &c);
    for(int i = 0; i < c; i++){
        scanf("%d", &n);
        int esferas = 0;
        for(int j = 1; j <= n; j++){
            int divisores = 0;
            for(int k = 1; k <= n; k++){
                if(j % k == 0){
                    divisores += 1;
                }
            }
            if(divisores % 2 == 0){
                esferas += 1;
            }

        }
        printf("%d\n", esferas);
    }

    return 0;
}
