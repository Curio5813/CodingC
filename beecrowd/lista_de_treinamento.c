#include <stdio.h>
#include <string.h>

int main(){

    int c, cont = 0;
    char candidatos[1003], uns = '1';

    scanf("%d", &c);
    printf("");
    getchar();
    fgets(candidatos, sizeof(candidatos), stdin);
    size_t tam = strlen(candidatos);
    for(int i = 0; i <= tam; i++){
        if(candidatos[i] == uns){
            cont += 1;
        }
    }
    printf("%d\n", cont);

    return 0;
}
