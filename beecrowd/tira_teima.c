#include <stdio.h>


int main(){

    int x, y;

    scanf("%d %d", &x, &y);
    if(0 <= x && x <= 432 && 0 <= y && y <= 468){
        printf("dentro\n");
    }
    else{
        printf("fora\n");
    }

    return 0;
}
