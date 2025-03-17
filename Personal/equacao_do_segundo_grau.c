#include <stdio.h>
#include <math.h>


int main(){

    float a, b, c, delta, x1, x2;

    printf("Digite os valores para os coeficientes 'a', 'b' e 'c' respectivamente: \n");
    scanf("%f %f %f", &a, &b,&c);
    printf("\n");
    printf("%.2fx² + (%.2fx) + (%.2f) = 0\n", a, b, c);
    printf("\n");

    delta = b * b - 4 * a * c;

    if(delta < 0){
        printf("A equação do 2º grau não possui raízes reais.\n");
    }
    if(delta == 0){
        printf("A equação do 2º grau tem apenas 1 raíz.\n");
        x1 = -b / (2 * a);
        printf("A raíz e %.2f\n", x1);
    }
    if(delta > 0){
        printf("A equação do 2º grau tem 2 raízes.\n");
        x1 = (-b + (delta)) / (2 * a);
        x2 = (-b - (delta)) / (2 * a);
        printf("As raízes sao %.2f e %.2f\n", x1, x2);
    }
    printf("\n");

    return 0;

}
