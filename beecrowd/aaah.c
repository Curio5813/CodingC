#include <stdio.h>
#include <string.h>


int main(){

    char marius[1000], medico[1000];

    scanf("%s", &marius);
    scanf("%s", &medico);
    int ah_marius = strlen(marius);
    int ah_medico = strlen(medico);

    if(ah_marius < ah_medico){
        printf("no\n");
    }
    if(ah_marius >= ah_medico){
        printf("go\n");
    }

    return 0;
}
