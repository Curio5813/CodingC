#include <stdio.h>
#include <math.h>


int main(){

    double a, d, r, hzinho, h, rad, pi = 3.141592653589793;
    while(scanf("%lf %lf %lf", &a, &d, &r) != EOF){
        rad = r * (pi / 180.0);
        hzinho = d / tan(rad);
        h = a - hzinho;
        printf("%.4lf\n", h);
    }

    return 0;
}
