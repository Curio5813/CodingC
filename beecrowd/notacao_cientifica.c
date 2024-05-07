#include <stdio.h>
#include <stdlib.h>


int main(){

    char str[120];

    double numero;

    scanf("%s", &str);

    numero = atof(str);

    if(numero >= 0 && str[0] != '-'){
        printf("+%.4E\n", numero);
    }
    else{
        printf("%.4E\n", numero);
    }


    return 0;
}
