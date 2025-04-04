#include <stdio.h>


int main(){

    int divisores = 0, cont = 0;

    for(int i = 1; i <= 100; i++){
        for(int j = 1; j < i; j++){
            if(i % j == 0){
                divisores += j;
            }

        }
        if(divisores < i){
            cont += 1;
            printf("%d é um número deficiente!\n", i);
        }
        divisores = 0;

    }
    printf("\n");
    printf("Entre 1 e 100 temos %d numeros deficientes.\n", cont);

    return 0;

}
