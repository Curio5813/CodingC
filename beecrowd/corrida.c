#include <stdio.h>


int main(){

    int s, va, vb;
    double t;

    while(scanf("%d %d %d", &s, &va, &vb) != EOF){
        if(va <= vb){
            printf("impossivel\n");
        }
        else{
            t = (double) s / (double) (va - vb);
            printf("%.2lf\n", t);
        }
    }

    return 0;
}