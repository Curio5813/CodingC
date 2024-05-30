#include <stdio.h>


int main(){

    int v, cont = 0;

    while(scanf("%d", &v)){
        if(v == 0){
           break;
        }
        int cinquenta = 0, dez = 0, cinco = 0, hum = 0;
        while(v >= 50){
            v -= 50;
            cinquenta += 1;
        }
        while(v >= 10){
            v -= 10;
            dez += 1;
        }
        while(v >= 5){
            v -= 5;
            cinco += 1;
        }
        while(v >= 1){
            v -= 1;
            hum += 1;
        }
        cont += 1;
        printf("Teste %d\n%d %d %d %d\n\n", cont, cinquenta, dez, cinco, hum);
    }

    return 0;
}