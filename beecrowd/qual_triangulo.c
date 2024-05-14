#include <stdio.h>

int main() {
    long long int a, b, c, soma1, soma2, soma3, cont = 0;

    scanf("%lld %lld %lld", &a, &b, &c);

    soma1 = a + b;
    soma2 = a + c;
    soma3 = b + c;

    if ((c < soma1) && (b < soma2) && (a < soma3)) {
        cont = 1;
        printf("Valido-");

        if (a == b && b == c) {
            printf("Equilatero\n");
        } else if (a == b || a == c || b == c) {
            printf("Isoceles\n");
        } else {
            printf("Escaleno\n");
        }

        if ((a * a == (b * b + c * c)) || (b * b == (a * a + c * c)) || (c * c == (b * b + a * a))) {
            printf("Retangulo: S\n");
        } else {
            printf("Retangulo: N\n");
        }
    }
    if(cont == 0){
        printf("Invalido\n");
    }

    return 0;
}

