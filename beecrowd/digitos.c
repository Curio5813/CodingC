#include <stdio.h>
#include <math.h>


int main(){

    int c, n, m, cont;

    long double potencia;

    scanf("%d", &c);
    for(int i = 0; i < c; i++){
         scanf("%d %d", &n, &m);
         cont = 1;
         potencia = pow(n, m);
         cont += floor(log10(potencia));
         printf("%d\n", cont);

    }


    return 0;
}


