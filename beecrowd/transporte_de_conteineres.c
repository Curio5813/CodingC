#include <stdio.h>


int main(){

    long long int a, b, c, x, y, z, conteineres_l, conteineres_c, conteineres_h, total;

    scanf("%lld %lld %lld %lld %lld %lld", &a, &b, &c, &x, &y, &z);

    conteineres_l = x / a;
    conteineres_c = y / b;
    conteineres_h = z / c;
    total = conteineres_l * conteineres_c * conteineres_h;

    printf("%lld\n", total);

    return 0;

}
