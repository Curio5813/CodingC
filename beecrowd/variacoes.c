#include <stdio.h>
#include <string.h>


int main(){

    int t;
    char s[100];

    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        int cont = 1;
        scanf("%s", s);
        size_t tam = strlen(s);
        for(int j = 0; j < tam; j++){
            if(s[j] == 'A' || s[j] == 'a' || s[j] == 'E' || s[j] == 'e' || s[j] == 'I' || s[j] == 'i'
            || s[j] == 'O' || s[j] == 'o' || s[j] == 'S' || s[j] == 's'){
                cont *= 3;
            }
            else{
                cont *= 2;
            }
        }
        printf("%d\n", cont);

    }

    return 0;
}
