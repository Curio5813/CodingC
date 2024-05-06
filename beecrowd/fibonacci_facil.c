#include <stdio.h>


int main(){

    int n;

    long long int a, b = 1, fibo = 0;

    scanf("%d", &n);
    printf("0 ");
    if(n == 1){
        return 0;
    }
    for(int i = 0; i < n - 1; i++){
        a = b;
        b = fibo;
        fibo = a + b;
        if(i == n - 2){
            printf("%lld\n", fibo);
            break;
        }
        if(i < n - 2) {
            printf("%lld ", fibo);
        }
    }
    return 0;
}