#include <stdio.h>


int main(){

    int n, la, lb, sa, sb;

    scanf("%d %d %d %d %d", &n, &la, &lb, &sa, &sb);
    if(la <= sa && sa <= n && n <= lb && lb <= sb){
        printf("possivel\n");
    }
    else if(la <= sa && sa <= n && n <= sb && sb <= lb){
        printf("possivel\n");
    }
    else if(sa <= la && la <= n && n <= sb && sb <= lb){
        printf("possivel\n");
    }
    else if(sa <= la && la <= n && n <= lb && lb <= sb){
        printf("possivel\n");
    }
    else{
        printf("impossivel\n");
    }

    return 0;
}
