#include <stdio.h>
#include <math.h>



int main(){

    int t, c, d;
    long long int placas;

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        scanf("%d %d", &c, &d);
        if(c == 0 && d == 0){
            printf("%d\n", 0);
        }
        else if(c == 0){
            placas = (long long int) pow(10, d);
            printf("%lld\n", placas);

        }
        else if(d == 0){
            placas = (long long int) pow(26, c);
            printf("%lld\n", placas);

        }
        else{
            placas = (long long int) pow(26, c) * (long long int) pow(10, d);
            printf("%lld\n", placas);

        }
    }

    return 0;
}
