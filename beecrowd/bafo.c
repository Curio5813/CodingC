#include <stdio.h>


int main(){

    int r, cont = 1, a, b;

    while(scanf("%d", &r)){
        int aldo = 0, beto = 0;
        if(r == 0){
            break;
        }
        else{
            for(int i = 0; i < r; i++){
                scanf("%d %d", &a, &b);
                aldo += a;
                beto += b;
            }
        }
        printf("Teste %d\n", cont);
        if(aldo > beto){
            printf("Aldo\n");
        }
        else{
            printf("Beto\n");
        }
        printf("\n");
        cont += 1;
    }

    return 0;
}
