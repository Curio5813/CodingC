#include <stdio.h>


int main(){

    int n, t, d;
    double vm, maior = 0.0;

    while(scanf("%d", &n) != EOF){
        for(int i = 0; i < n; i++){
            scanf("%d %d", &t, &d);
            vm = (double)d / (double)t;
            if(i == 0){
                printf("%d\n", i + 1);
                maior = vm;
            }
            if(i > 0){
                if(vm > maior){
                    printf("%d\n", i + 1);
                    maior = vm;
                }
            }
        }
    }

    return 0;
}