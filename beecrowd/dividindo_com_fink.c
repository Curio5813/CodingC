#include <stdio.h>


int main(){

    long int n;

    while(scanf("%ld", &n)){
        long int raposa = 0, picapau = 0, comida = n, flag = 0 , div_raposa, div_picapau;
        if(n == 0){
            break;
        }
        else{
            for(int i = 1; i <= n; i++) {
                picapau += 1;
                div_picapau = picapau;
                for(int j = 1; j <= i; j++){
                    if((div_raposa + div_picapau) > comida){
                        flag = 1;
                    }
                    else{
                        raposa += j;
                    }
                }
                if(flag != 1){
                    div_raposa = raposa;
                    raposa = 0;
                }
            }
        }
        while(div_raposa + picapau > comida){
            picapau -= 1;
        }
        printf("%ld %ld\n", div_raposa, picapau);
    }

    return 0;
}
