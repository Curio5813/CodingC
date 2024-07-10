#include <stdio.h>
#include <math.h>


int main(){

    double pi = 3.141592654, a, b, c, altura, cordoes;

    while((scanf("%lf %lf %lf", &a, &b, &c)) != EOF){
        a = a * (pi / 180.0);
        altura = (tan(a) * b) + c;
        cordoes = altura * 5;
        printf("%.2lf\n", cordoes);

    }

    return 0;
}
