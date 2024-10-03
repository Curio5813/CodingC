#include <stdio.h>


int main(){

    int ingredientes[3], menor = 999;

    scanf("%d %d %d", &ingredientes[0], &ingredientes[1], &ingredientes[2]);
    ingredientes[0] = ingredientes[0] /2;
    if(ingredientes[0] < menor){
        menor = ingredientes[0];
    }
    ingredientes[1] = ingredientes[1] /3;
    if(ingredientes[1] < menor){
        menor = ingredientes[1];
    }
    ingredientes[2] = ingredientes[2] /5;
    if(ingredientes[2] < menor){
        menor = ingredientes[2];
    }
    printf("%d\n", menor);

    return 0;
}
