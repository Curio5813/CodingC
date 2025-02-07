#include <stdio.h>


int main(){

    int l, d = 0;

    printf("Quantos lados tem o polígono?\n");
    scanf("%d", &l);
    printf("\n");
    while(l >= 3){
        d = (l * (l - 3)) / 2;
        printf("O polígono tem %d diagonais.\n", d);
        printf("Quantos lados tem o polígono?\n");
        scanf("%d", &l);
        printf("\n");

    }
    printf("\n");

    return 0;
}
