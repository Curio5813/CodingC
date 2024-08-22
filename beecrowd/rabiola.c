#include <stdio.h>
#include <string.h>


int main(){

    char filetes[100];

    while(scanf("%s", &filetes) != EOF){
        int tam = strlen(filetes);
        int k = 0, j = 0, tamanho1 = 0, tamanho2 = 0, maior = 0;
        for(int i = 0; i < tam; i++){
            if(filetes[i] == 'x'){
                k += 1;
            }
        }
        for(int i = 0; i < tam; i++){
            if(i == 0 && filetes[i] == 'o'){
                tamanho1 += 1;
            }
            else if(i == 0 && filetes[i] == 'x'){
                j += 1;
            }
            else if(i > 0 && filetes[i] == 'o' && j < 1 && k > 1){
                tamanho1 += 1;
            }
            else if(i > 0 && filetes[i] == 'o' && j < k && k > 1){
                tamanho2 += 1;
                if(tamanho2 % 2 == 0){
                    tamanho1 += 1;
                }
            }
            else if(i > 0 && filetes[i] == 'o' && j < k & k <= 1){
                tamanho1 += 1;
            }
            else if(i > 0 && filetes[i] == 'x'){
                if(tamanho1 > maior){
                    maior = tamanho1;
                }
                tamanho1 = 0;
                tamanho2 = 0;
                j += 1;
            }
            else if(filetes[i] == 'o' && j >= k){
                tamanho1 += 1;
            }
        }
        if(tamanho1 > maior){
            maior = tamanho1;
        }
        printf("%d\n", maior);
    }

    return 0;
}
