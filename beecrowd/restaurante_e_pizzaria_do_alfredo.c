#include <stdio.h>
#include <math.h>


int main(){

    int raio, largura, altura, diametro, cont = 0;

    while(scanf("%d %d %d", &raio, &largura, &altura)){
        if(raio == 0){
            break;
        }
        else{
            cont += 1;
            diametro = raio * 2;
            if(pow(largura, 2) + pow(altura, 2) <= pow(diametro, 2)){
                printf("Pizza %d fits on the table.\n", cont);
            }
            else{
                printf("Pizza %d does not fit on the table.\n", cont);
            }
        }
    }

    return 0;
}
