#include <stdio.h>


int main(){

    int n, valor = 0;

    scanf("%d", &n);
    if(n <= 10){
        valor += 7;
        printf("%d\n", valor);
    }
    if(n >= 11 && n <= 30){
        valor += 7;
        valor += n - 10;
        printf("%d\n", valor);

    }
    if(n >= 31 && n <= 100){
        valor += 7;
        valor += 20;
        valor += (n - 30) * 2;
        printf("%d\n", valor);
    }
    if(n >= 101){
        valor += 7;
        valor += 20;
        valor += 140;
        valor += (n - 100) * 5;
        printf("%d\n", valor);

    }

    return 0;
}
