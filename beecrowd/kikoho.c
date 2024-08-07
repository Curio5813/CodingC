#include <stdio.h>
#include <math.h>


int main(){

    int n;
    double ax, ay, bx, by, cx, cy, s, l1, l2, l3, area;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%lf %lf %lf %lf %lf %lf", &ax, &ay, &bx, &by, &cx, &cy);
        l1 = sqrt((pow((ax - bx), 2.0) + pow((ay - by), 2.0)));
        l2 = sqrt((pow((ax - cx), 2.0) + pow((ay - cy), 2.0)));
        l3 = sqrt((pow((bx - cx), 2.0) + pow((by - cy), 2.0)));

        s = (l1 + l2 + l3) / 2.0;

        // Heron's Formula.
        area = sqrt( s * (s - l1) * (s - l2) * (s - l3));
        printf("%.3lf\n", area);
    }

    return 0;
}
