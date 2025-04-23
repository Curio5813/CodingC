#include <stdio.h>


int main(){

    long long int l, n, tapete = 0, areas = 0;

    scanf("%lld %lld", &l, &n);

    for(long long int i = 0; i < n - 1; i++){
        tapete += 1;
        areas += 1;
    }

    areas += (l - tapete) * (l - tapete);

    printf("%lld\n", areas);

    return 0;

}
