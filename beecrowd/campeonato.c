#include <stdio.h>


int main(){

    int cv, ce, cs, fv, fe, fs, pc, pf;

    scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);

    pc = 3 * cv + ce;
    pf = 3 * fv + fe;

    if(pc > pf){
        printf("C\n");
    }
    if(pc < pf){
        printf("F\n");
    }
    if(pc == pf){
        if(cs > fs){
            printf("C\n");
        }
        if(cs < fs){
            printf("F\n");
        }
        if(cs == fs){
            printf("=\n");
        }
    }


    return 0;
}
