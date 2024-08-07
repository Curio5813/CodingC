#include <stdio.h>
#include <math.h>


int main(){

    long long int c, g, dias, fecha;

    scanf("%lld %lld", &c, &g);
    dias = floor( (double) c / (double) g);
    fecha = 21 + dias;
    if(fecha > 30){
        fecha = fecha - 30;
        if(fecha >= 31){
            printf("A UFSC fecha dia 31 de outubro.\n");
        }
        else{
            printf("A UFSC fecha dia %lld de outubro.\n", fecha);
        }
    }
    else{
        printf("A UFSC fecha dia %lld de setembro.\n", fecha);
    }

    return 0;
}
