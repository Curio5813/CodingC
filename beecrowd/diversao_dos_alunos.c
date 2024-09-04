#include <stdio.h>


int main(){

    long int p1, p2, maior1 = 0, maior2 = 0;

    scanf("%ld %ld", &p1, &p2);
    for(long int i = 2; i <= p1; i++){
        for(long int j = 2; j <= p1; j++){
            if(i % j == 0 && i == j){
                if(i > maior1) {
                    maior1 = i;
                }
            }
            if(i % j == 0 && i != j){
                break;
            }
        }
    }
    for(long int i = 2; i <= p2; i++) {
        for (long int j = 2; j <= p2; j++) {
            if (i % j == 0 && i == j) {
                if (i > maior2) {
                    maior2 = i;
                }
            }
            if(i % j == 0 && i != j){
                break;
            }
        }
    }
    printf("%ld\n", maior1 * maior2);

    return 0;
}
