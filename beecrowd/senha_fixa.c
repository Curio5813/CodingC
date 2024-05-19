#include <stdio.h>


int main(){

    long long int num;

    while(scanf("%lld", &num) != 2002){
        if(num == 2002){
            break;
        }
        printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");

    return 0;
}
