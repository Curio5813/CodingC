#include <stdio.h>
#include <math.h>


int main(){

    long long int c, n, m;
    double qtd;

    scanf("%lld", &c);
    for(int i = 0; i < c; i++){
        scanf("%lld %lld", &n, &m);
        qtd = (double) n / (double) m;
        qtd = ceil(qtd);
        printf("%.0lf\n", qtd);
    }

    return 0;
}
