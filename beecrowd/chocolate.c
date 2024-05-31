#include <stdio.h>


int main(){

    int n, armazenados = 0;

    scanf("%d", &n);
    int pedacos[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &pedacos[i]);
        armazenados += pedacos[i] - 1;
    }
    printf("%d\n", armazenados);

    return 0;
}