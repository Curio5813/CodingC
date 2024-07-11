#include <stdio.h>


int main(){

    int n;
    while(scanf("%d", &n)){
        if(n == -1){
            break;
        }
        int multiplo = 0, visitas = 0, dividas[n];
        for(int i = 0; i < n; i++){
            scanf("%d", &dividas[i]);
            multiplo += dividas[i];
            if(multiplo % 100 == 0){
                visitas += 1;
            }
        }

        printf("%d\n", visitas);
    }

    return 0;
}
