#include <stdio.h>


int main(){

    int n, cont = 1;

    while(scanf("%d", &n)){
        if(n == 0){
            break;
        }
        int participantes[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &participantes[i]);
        }
        for(int i = 0; i < n; i++) {
            if (participantes[i] == i + 1) {
                printf("Teste %d\n%d\n\n", cont, participantes[i]);
                cont += 1;
                break;
            }
        }

    }

    return 0;
}