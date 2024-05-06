#include <stdio.h>


int main(){

    long long int t, idx, fibo[60], a = 0, b = 1, p = 0;

    scanf("%lld", &t);
    for(int i = 0; i <= 60; i++){
        fibo[i] = p;
        a = b;
        b = p;
        p = a + b;
    }
    for(int i = 0; i < t; i++){
        scanf("%lld", &idx);
        printf("Fib(%lld) = %lld\n", idx, fibo[idx]);
    }

    return 0;
}