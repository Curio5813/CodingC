#include <stdio.h>
#include <math.h>


int main(){

    long long int n, g, termo;

    scanf("%lld", &n);
    for(long long int i = 0; i < n; i++){
        scanf("%lld", &g);
        termo = floor((-1 + sqrt(1 + 8 * g)) / 2);
        printf("%lld\n", termo);

    }

    return 0;
}
