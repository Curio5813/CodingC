#include <stdio.h>


int main(){

    int n, c, s, e, capacidade = 0, flag = 0;

    scanf("%d %d", &n, &c);
    for(int i = 0; i < n; i++){
        scanf("%d %d", &s, &e);
        capacidade += (e - s);
        if(capacidade > c){
            flag = 1;
        }
    }
    if(flag == 1){
        printf("S\n");
    }
    else{
        printf("N\n");
    }

    return 0;
}
