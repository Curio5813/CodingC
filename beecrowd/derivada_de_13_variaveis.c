#include <stdio.h>


int main(){

    double p, t, area;

    scanf("%lf %lf", &p, &t);

    area = (p * t) / 2.0;

    printf("Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = %.5lf.\n", area);

    return 0;

}
