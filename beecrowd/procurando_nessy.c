#include <stdio.h>


int main(){

    long int t, n, m, sonar;

    scanf("%ld", &t);
    for(int i = 0; i < t; i++){
        scanf("%ld %ld", &n, &m);
        n -= 2;
        m -= 2;
        while(n % 3 != 0){
            n += 1;
        }
        while(m % 3 != 0){
            m += 1;
        }
        sonar = (n / 3) * (m / 3);
        printf("%ld\n", sonar);

    }

    return 0;
}
