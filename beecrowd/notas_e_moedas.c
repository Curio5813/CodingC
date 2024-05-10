#include <stdio.h>


int main(){

    double valor, valores[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00,
                             1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    int notas_moedas[12], cont = 0, i = 0;

    scanf("%lf", &valor);

    while(valor >= 100.00){
        cont += 1;
        valor -= 100.00;
    }
    notas_moedas[i] = cont;
    cont = 0;
    i += 1;
    while(valor >= 50.00){
        cont += 1;
        valor -= 50.00;
    }
    notas_moedas[i] = cont;
    cont = 0;
    i += 1;
    while(valor >= 20.00){
        cont += 1;
        valor -= 20.00;
    }
    notas_moedas[i] = cont;
    cont = 0;
    i += 1;
    while(valor >= 10.00){
        cont += 1;
        valor -= 10.00;
    }
    notas_moedas[i] = cont;
    cont = 0;
    i += 1;
    while(valor >= 5.00){
        cont += 1;
        valor -= 5.00;
    }
    notas_moedas[i] = cont;
    cont = 0;
    i += 1;
    while(valor >= 2.00){
        cont += 1;
        valor -= 2.00;
    }
    notas_moedas[i] = cont;
    cont = 0;
    i += 1;
    while(valor >= 1.00){
        cont += 1;
        valor -= 1.00;
    }
    notas_moedas[i] = cont;
    cont = 0;
    i += 1;
    while(valor >= 0.50){
        cont += 1;
        valor -= 0.50;
    }
    notas_moedas[i] = cont;
    cont = 0;
    i += 1;
    while(valor >= 0.25){
        cont += 1;
        valor -= 0.25;
    }
    notas_moedas[i] = cont;
    cont = 0;
    i += 1;
    while(valor >= 0.10){
        cont += 1;
        valor -= 0.10;
    }
    notas_moedas[i] = cont;
    cont = 0;
    i += 1;
    while(valor >= 0.05){
        cont += 1;
        valor -= 0.05;
    }
    notas_moedas[i] = cont;
    cont = 0;
    i += 1;
    while(valor >= 0.01){
        cont += 1;
        valor -= 0.01;
    }
    notas_moedas[i] = cont;
    for(int j = 0; j < 12; j++){
        if(j == 0){
            printf("NOTAS:\n");
        }
        if(j < 6){
            printf("%d nota(s) de R$ %.2lf\n", notas_moedas[j], valores[j]);
        }
        if(j == 6){
            printf("MOEDAS:\n");
        }
        if(j >= 6){
            printf("%d moeda(s) de R$ %.2lf\n", notas_moedas[j], valores[j]);
        }

    }

    return 0;
}
