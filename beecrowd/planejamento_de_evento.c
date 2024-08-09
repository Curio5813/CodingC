#include <stdio.h>


int main(){

    long int n, b, h, w, preco, custo_total, menor_custo = 9999999;
    scanf("%ld %ld %ld %ld", &n, &b, &h, &w);
    for(int i  = 0; i < h; i++){
        long int camas[w];
        scanf("%ld", &preco);
        for(int j = 0; j < w; j++){
            scanf("%ld", &camas[j]);
        }
        for(int j = 0; j < w; j++){
            if(camas[j] >= n){
                custo_total = preco * n;
                if(custo_total < menor_custo){
                    menor_custo = custo_total;
                }
            }
        }

    }
    if(menor_custo > b){
        printf("stay home\n");
    }
    else{
        printf("%ld\n", menor_custo);
    }

    return 0;
}
