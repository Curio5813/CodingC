#include <stdio.h>


int main(){

    int d, i, x, f;

    scanf("%d %d %d %d", &d, &i, &x, &f);
    if(d % 2 == 1){
        for(int j = 0; j < f; j++){
            if(j % 2 == 0){
                i += x;
            }
            if(j % 2 == 1){
                i -= x;
            }
        }
    }
    if(d % 2 == 0){
        for(int j = 0; j < f; j++){
            if(j % 2 == 0){
                i -= x;
            }
            if(j % 2 == 1){
                i += x;
            }
        }
    }
    printf("%d\n", i);

    return 0;
}
