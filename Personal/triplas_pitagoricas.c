#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    int a, b, c;

    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            if(i > j){
                a = 2 * i * j;
                b = i * i - j * j;
                c = i * i + j * j;
                printf("%d %d %d\n", a, b, c);
            }
        }
    }

    return 0;

}
