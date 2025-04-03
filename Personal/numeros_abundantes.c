#include <stdio.h>


int main(){

    int divisores = 0, cont = 0;

    for(int i = 1; i <= 100; i++){
        for(int j = 1; j < i; j++){
            if(i % j == 0){
                divisores += j;
            }
        }
        if(divisores > i){
            printf("%d é um número abundante!\n", i);
            divisores = 0;
            cont += 1;
        }
        else{
            divisores = 0;
        }
    }
    printf("\n");
    printf("Existem %d numeros abundantes entre 1 e 100.\n", cont);

    return 0;

}
