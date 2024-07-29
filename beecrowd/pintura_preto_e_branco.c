#include <stdio.h>
#include <math.h>


int main(){

    int n, m, c;
    double tabuleiros;

    while(scanf("%d %d %d", &n, &m, &c)){
        if(n == 0 && m == 0 && c == 0){
            break;
        }
        else{
            if(n == 8 && m == 8 && c == 0){
                printf("%d\n", 0);
            }
            else if(n == 8 & m == 8 && c == 1){
                printf("%d\n", 1);
            }
            else {
                if (n % 2 == 0 && m % 2 == 0) {
                    if (c == 1) {
                        tabuleiros = (n - 7) * (m - 7) / 2.0;
                        printf("%.0lf\n", ceil(tabuleiros));
                    }
                    if (c == 0) {
                        tabuleiros = (n - 7) * (m - 7) / 2.0;
                        printf("%.0lf\n", floor(tabuleiros));
                    }
                }
                else if(n % 2 != 0 || m % 2 != 0){
                    tabuleiros = (n - 7) * (m - 7) / 2.0;
                    printf("%.0lf\n", tabuleiros);
                }
            }
        }
    }

    return 0;
}
