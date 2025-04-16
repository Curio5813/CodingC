#include <stdio.h>


int main(){

    long int n, times_alunos = 0, alunos;

    scanf("%ld", &n);

    long int times[n];

    for(long int i = 0; i < n; i++){
        scanf("%ld", &times[i]);
    }

    for(long int i = 0; i < n; i++){
        times_alunos += (times[i] / 3);
    }

    alunos = times_alunos * 3;

    printf("%ld\n", alunos);


    return 0;

}
