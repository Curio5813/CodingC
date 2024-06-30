#include <stdio.h>


int main(){

    int t, qtd;
    double a, b, area_total;

    scanf("%d", &t);
    while(t != 0){
        int cont = 0;
        for(int i = 0; i < t; i++){
            scanf("%d %lf %lf", &qtd, &a, &b);
            area_total = (((a + b) / 2.0) * 5.0) * (double)qtd;
            cont += 1;
            printf("Size #%d:\n", cont);
            printf("Ice Cream Used: %.2lf cm2\n", area_total);
        }
        printf("\n");
        scanf("%d", &t);

    }

    return 0;
}
