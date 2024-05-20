#include <stdio.h>


int main(){

    int n, p, q, resultado;

    char c;

    scanf("%d %d %c %d", &n, &p, &c, &q);

    if(c == '+'){
        resultado = p + q;
        if(resultado <= n){
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }
    }
    if(c == '*'){
        resultado = p * q;
        if(resultado <= n){
            printf("OK\n");
        }
        else{
            printf("OVERFLOW\n");
        }
    }

    return 0;
}