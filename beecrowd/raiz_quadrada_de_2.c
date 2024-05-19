#include <stdio.h>


int main(){

    int n;
    long double raiz, numerador = 1, denominador = 2;

    scanf("%d", &n);
    if(n == 0){
        printf("1.0000000000\n");
        return 0;
    }
    for(int i = 0; i < n; i++){
        if(i >= 1){
            denominador = 2.0 + (1.0 / denominador);
        }
        raiz = 1.0 + (numerador / denominador);

    }
    printf("%.10llf\n", raiz);

    return  0;
}