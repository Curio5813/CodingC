#include <stdio.h>



int main(){

    float distancia, aquiles, tartaruga, velocidade_tartaruga;
    long int pulos = 0, flag = 0;

    printf("Qual a distância incial entre aquiles e a tartaruga?\n");
    scanf("%f", &distancia);
    printf("\n");
    printf("Qual a velocidade da tartaruga?\n");
    scanf("%f", &velocidade_tartaruga);
    printf("\n");
    aquiles = 0;
    tartaruga = distancia;
    for(int i = 0; i < (int)tartaruga; i++){
        pulos += 1;
        aquiles += distancia;
        tartaruga += velocidade_tartaruga;
        distancia /= 2;
        if(aquiles >= tartaruga){
            printf("Aquiles alcança a tartaruga depois de %d pulo(s) na distancia de %.2f metros.\n", pulos, tartaruga);
            flag = 1;
            break;
        }
    }
    if(flag != 1){
        printf("Aquiles nunca alcancará a tartaruga!\n");
    }

    return 0;

}
