#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    long int a, b, digitos[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    long int div, cont = 0, qtd[10];

    while(scanf("%ld %ld", &a, &b)){
        if(a == 0 && b == 0) {
            break;
        }
        else{
            for(long int i = 0; i < 10; i++){
                for(long int j = a; j <= b; j++){
                    long int n = j;
                    div = n % 10;
                    n = n / 10;
                    if(digitos[i] == div) {
                        cont += 1;
                    }
                    while(n > 0) {
                        div = n % 10;
                        n = n / 10;
                        if(digitos[i] == div) {
                            cont += 1;
                        }
                    }
                }
                qtd[i] = cont;
                cont = 0;
            }
            printf("\n");
            for(int i = 0; i < 10; i++){
                if(i == 9){
                    printf("%ld", qtd[i]);
                    break;
                }
                printf("%ld ", qtd[i]);
            }
        }

    }

    return 0;
}