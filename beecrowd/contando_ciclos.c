#include <stdio.h>


int main(){

    int cont = 0, n, ciclos;

    while(scanf("%d", &n)){
        if(n == -1){
            break;
        }
        else{
            ciclos = n / 2;
            cont += 1;
        }
        printf("Experiment %d: %d full cycle(s)\n", cont, ciclos);
    }

    return 0;
}
