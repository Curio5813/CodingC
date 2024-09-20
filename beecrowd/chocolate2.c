#include <stdio.h>


int main(){

    int l, pedacos, cont = 1;

    scanf("%d", &l);
    pedacos = l;
    while(pedacos > 1){
        l = l / 2;
        pedacos = l;
        cont *= 4;
    }
    printf("%d\n", cont);

    return 0;
}
