#include <stdio.h>
#include <math.h>


int main(){

    int cont = 0;

    for(int i = 1; i <= 100; i++){
        for(int j = 1; j <= 100; j++){
            if(j == i * i){
                printf("%d\n", j);
                cont += 1;
            }
        }
    }
    printf("\n");
    printf("Existem %d quadrados perfeitos de 1 à 100\n", cont);


    return 0;

}
