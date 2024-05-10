#include <stdio.h>


int main(){

    double nota1, nota2, nota3, media;

    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10.0;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}