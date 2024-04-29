#include <stdio.h>


int main(){

    double n1, n2, n3, n4, media, n_e, media_final;

    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10.0;
    if(media >= 7.0){
        printf("Media: %.1lf\nAluno aprovado.\n", media);
    }
    if(media < 5.0){
        printf("Media: %.1lf\nAluno reprovado.\n", media);
    }
    if(media >= 5.0 && media < 7.0){
        scanf("%lf", &n_e);
        media_final = (n_e + media) / 2.0;
        if(media_final >= 5.0){
            printf("Media: %.1lf\nAluno em exame.\nNota do exame: %.1lf\nAluno aprovado."
                   "\nMedia final: %.1lf\n", media, n_e, media_final);
        }
        if(media_final < 5.0) {
            printf("Media: %.1lf\nAluno em exame.\nNota do exame: %.1lf\nAluno reprovado."
                   "\nMedia final: %.1lf\n", media, n_e, media_final);
        }
    }

    return 0;
}