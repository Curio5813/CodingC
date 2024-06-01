#include <stdio.h>


int main(){

    int n, latas, copos, cont = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &latas, &copos);
        if(latas > copos){
            cont += copos;
        }
    }
    printf("%d\n", cont);

    return 0;
}