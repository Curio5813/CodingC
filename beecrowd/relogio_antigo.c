#include <stdio.h>


int main(){

    double h, m, hora, min;

    while(scanf("%lf %lf", &h, &m) != EOF){
        hora = (h / 360.0) * 12;
        min = (m / 360.0) * 60;
        if(hora < 10 && min < 10){
            printf("0%.0lf:0%.0lf\n", hora, min);
        }
        if(hora < 10 && min >= 10){
            printf("0%.0lf:%0.lf\n", hora, min);
        }
        if(hora >= 10 && min < 10){
            printf("%.0lf:0%0.lf\n", hora, min);
        }
        if(hora >= 10 && min >= 10){
            printf("%.0lf:%0.lf\n", hora, min);
        }
    }

    return 0;
}
