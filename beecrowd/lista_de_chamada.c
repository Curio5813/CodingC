#include <stdio.h>
#include <string.h>


int main(){

    int n, k;
    char alunos[100][100], temp[100];;

    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; i++){
        scanf("%s", alunos[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(alunos[j], alunos[j+1]) > 0) {
                strcpy(temp, alunos[j]);
                strcpy(alunos[j], alunos[j + 1]);
                strcpy(alunos[j + 1], temp);
            }
        }
    }
    printf("%s\n", alunos[k - 1]);

    return 0;
}
