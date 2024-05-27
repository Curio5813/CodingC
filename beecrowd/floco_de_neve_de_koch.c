#include <stdio.h>
#include <math.h>


int main(){

    double lado, area, area_total;

    while(scanf("%lf", &lado) != EOF){
        area = ((lado * lado) * sqrt(3)) / 4.0;
        area_total = (8 * area) / 5;
        printf("%.2lf\n", area_total);
    }

    return 0;
}
