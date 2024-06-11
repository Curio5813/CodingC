#include <stdio.h>


int main(){

    int n, g;
    double preco, preco_g, menor = 999999999;

    scanf("%d", &n);
    double precos[n];

    for(int i = 0; i < n; i++){
        scanf("%lf %d", &preco, &g);
        preco_g = (preco / (double)g) * 1000;
        if(preco_g < menor){
            menor = preco_g;
        }
    }
    printf("%.2lf\n", menor);

    return 0;
}
