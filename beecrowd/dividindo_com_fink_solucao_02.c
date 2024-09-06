#include <stdio.h>


int main(){

    long int n, r = 0, div_raposa[100001];
    for(int i = 1; i <= 100000; i++) {
        r += i;
        div_raposa[i] = r;
    }
    while(scanf("%ld", &n)){
        long int picapau = 0, raposa = 0, flag = 0;
        if(n == 0){
            break;
        }
        for(int i = 0; i <= 100000; i++){
            if(div_raposa[i] == n){
                raposa = div_raposa[i];
                picapau = 0;
                break;
            }
            else if(div_raposa[i] > n) {
                raposa = div_raposa[i - 1];
                break;
            }

        }
        while (raposa + picapau < n) {
            picapau += 1;
        }
        printf("%ld %ld\n", raposa, picapau);
    }

    return 0;
}