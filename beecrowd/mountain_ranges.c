#include <stdio.h>


int main(){

    int n, x, cont = 1, maior = 0;

    scanf("%d %d", &n, &x);
    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        if(i >= n - 1){
            break;
        }
        if(a[i + 1] - a[i] <= x){
            cont += 1;
            if(cont > maior){
                maior = cont;
            }
        }
        else{
            cont = 1;
        }
    }
    if(maior == 0){
        printf("%d\n", 1);
    }
    else {
        printf("%d\n", maior);
    }

    return 0;
}
