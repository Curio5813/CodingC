#include <stdio.h>


int main(){

    double metade_area_total = 5600, area_cortada, b, t;

    scanf("%lf %lf", &b, &t);
    area_cortada = ((t + b) * 70.0) / 2.0;
    if(area_cortada > metade_area_total){
        printf("%d\n", 1);
    }
    if(area_cortada < metade_area_total){
        printf("%d\n", 2);
    }
    if(area_cortada == metade_area_total){
        printf("%d\n", 0);
    }

    return 0;
}
