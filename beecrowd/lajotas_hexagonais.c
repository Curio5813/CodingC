#include <stdio.h>


int main(){

    long int n;

    while(scanf("%ld", &n)){
        long int a = 0, b = 1, p = 1;
        if(n == 0){
            break;
        }
        else{
            for(int i = 0; i < n; i++){
                a = b;
                b = p;
                p = a + b;
            }
            printf("%ld\n", b);
        }

    }

    return 0;
}
