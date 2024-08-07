#include <stdio.h>


int main(){

    int n, envelope1[2], envelope2[2], temp;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d %d %d %d", &envelope1[0], &envelope1[1], &envelope2[0], &envelope2[1]);

        if (envelope1[0] > envelope1[1]) {
            temp = envelope1[1];
            envelope1[1] = envelope1[0];
            envelope1[0] = temp;
        }
        if (envelope2[0] > envelope2[1]) {
            temp = envelope2[1];
            envelope2[1] = envelope2[0];
            envelope2[0] = temp;
        }
        if (envelope1[0] >= envelope2[0] || envelope1[1] >= envelope2[1]) {
            printf("N\n");
        } else {
            printf("S\n");
        }
    }

    return 0;
}
