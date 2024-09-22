#include <stdio.h>


int main(){

    int n1, n2, d1, d2, v1, v2;
    double t1, t2;

    scanf("%d %d %d", &n1, &d1, &v1);
    scanf("%d %d %d", &n2, &d2, &v2);

    t1 = (double) d1/v1;
    t2 = (double) d2/v2;

    if(t1 < t2){
        printf("%d\n", n1);
    }
    if(t2 < t1){
        printf("%d\n", n2);
    }

    return 0;
}
