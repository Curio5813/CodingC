#include <stdio.h>


int main(){

    int t, a;

    scanf("%d %d", &t, &a);
    int mudanca_de_volume[a], volume_final = t;
    for(int i = 0; i < a; i++){
        scanf("%d", &mudanca_de_volume[i]);
    }
    for(int i = 0; i < a; i++){
        if(0 <= volume_final && volume_final <= 100){
            volume_final += mudanca_de_volume[i];
        }
        if(volume_final < 0){
            volume_final = 0;
        }
        if(volume_final > 100){
            volume_final = 100;
        }
    }
    printf("%d\n", volume_final);


    return 0;
}
