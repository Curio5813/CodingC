#include <stdio.h>


int main(){

    long long int a = 0, b = 1, c, n;

    printf("Digite quantos termos a sequência de Fibonacci tera:\n");
    scanf("%d", &n);
    printf("Sequência de Fibonacci até %d termos:\n", n);
    printf("\n");

    for(int i = 0; i < n; i++){

        printf("%lld ", a);
        c = a + b;
        a = b;
        b = c;

    }
    printf("\n");


    return 0;

}
