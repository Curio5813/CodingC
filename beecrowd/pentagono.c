#include <stdio.h>
#include <math.h>


int main(){

    int c, n;
    double area_petagono;

    scanf("%d", &c);
    for(int i = 0; i < c; i++){
        scanf("%d", &n);
        area_petagono = pow(n, 2) * 0.25 * sqrt(5 * (5 + 2 * sqrt(5)));
        printf("%.3lf\n", area_petagono);
    }

    return 0;
}
