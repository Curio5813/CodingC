#include <stdio.h>
#include <math.h>


int main(){

    double a, b, c, volume_p, aresta_c;

    scanf("%lf %lf %lf", &a, &b, &c);
    while(a != 0.0 && b != 0.0 && c != 0.0){
        volume_p = a * b * c;
        aresta_c = pow(volume_p, 1.0 / 3.0);
        aresta_c = (int)aresta_c;
        printf("%.0lf\n", aresta_c);
        scanf("%lf %lf %lf", &a, &b, &c);
    }

    return 0;
}
