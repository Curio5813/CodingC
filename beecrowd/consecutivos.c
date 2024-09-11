#include <stdio.h>


int main(){

    long long int n, cont = 1, maior = 1;

    scanf("%lld", &n);
    long long int valores[n];
    for(int i = 0; i < n; i++){
        scanf("%lld", &valores[i]);
    }
    for(int i = 0; i < n; i++){
        if(i == (n - 1)){
            if(cont > maior){
                maior = cont;
            }
            break;
        }
        if(valores[i] == valores[i + 1]) {
            cont += 1;
        }
        else if(valores[i] != valores[i + 1]){
            if(cont > maior){
                maior = cont;
            }
            cont = 1;
        }
    }
    printf("%lld\n", maior);

    return 0;
}