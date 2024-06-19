#include <stdio.h>


int main(){

    int n, x, y, rafael, beto, carlos;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        rafael = (3 * x) * (3 * x) + y * y;
        beto = 2 * (x * x) + (5 * 5 * y * y);
        carlos = -100 * x + y * y * y;
        if(rafael > beto && rafael > carlos){
            printf("Rafael ganhou\n");
        }
        if(beto > rafael && beto > carlos){
            printf("Beto ganhou\n");
        }
        if(carlos > rafael && carlos > beto){
            printf("Carlos ganhou\n");
        }

    }

    return 0;
}
