#include <stdio.h>


int main(){

    int p;

    while(scanf("%d", &p) != 0){
        if(p == 0){
            break;
        }
        int pessoas[p], tempo = 10;
        for(int i = 0; i < p; i++){
            scanf("%d", &pessoas[i]);
        }
        for(int i = p - 1; i >= 0; i--){
            if(i == 0){
                break;
            }
            if(pessoas[i] - pessoas[i - 1] >= 10){
                tempo += 10;
            }
            if(pessoas[i] - pessoas[i - 1] < 10){
                tempo += pessoas[i] - pessoas[i - 1];
            }

        }
        printf("%d\n", tempo);

    }

    return 0;
}
