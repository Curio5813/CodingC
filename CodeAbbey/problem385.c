#include <stdio.h>
#include <stdlib.h>


int main(){

	int a, b, temp, x = 9, y = 7, step = 0;

    while(x < 10000){
        a = x;
        b = y;
        while(y < 10000){
            temp = a;
            a = b;
            b = temp % a;
            step += 1;
            printf("%d %d %d\n", x, y, step);
            if(step == 5 && b == 0) {
                return printf("%d %d %d\n", x, y, step);
            }
            if(step < 5 && b == 0) {
                step = 0;
                y += 1;
                b = y;
            }
        }
        y = 1;
        x += 1;
    }

	return 0;
}
