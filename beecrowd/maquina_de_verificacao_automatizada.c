#include <stdio.h>


int main(){

    int rotulo1[5], rotulo2[5], bol = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &rotulo1[i]);
    }
    for(int i = 0; i < 5; i++){
        scanf("%d", &rotulo2[i]);
    }
    for(int i = 0; i < 5; i++){
        if(rotulo1[i] == 0 && rotulo2[i] == 1 || rotulo1[i] == 1 & rotulo2[i] == 0){
            bol = 1;
        }
        else{
            bol = 0;
            break;
        }

    }
    if(bol == 1){
        printf("Y\n");
    }
    if(bol == 0){
        printf("N\n");
    }

    return 0;
}