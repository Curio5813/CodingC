#include <stdio.h>


int main(){

    long long int sequencia[17] = {0, 1, 1}, cont = 0, novo_numero, i = 3, n;
    while(i < 17){
        if(cont == 0){
            novo_numero = sequencia[i - 2] * sequencia[i - 1];
            sequencia[i] = novo_numero;
            cont += 1;
            i += 1;
        }
        if(cont > 0){
            novo_numero = sequencia[i - 2] + sequencia[i - 1];
            sequencia[i] = novo_numero;
            i += 1;
            novo_numero = sequencia[i - 2] * sequencia[i - 1];
            sequencia[i] = novo_numero;
            i += 1;
        }
    }
    while((scanf("%d", &n) != EOF)){
        printf("%lld\n", sequencia[n - 1]);
    }

    return 0;
}
