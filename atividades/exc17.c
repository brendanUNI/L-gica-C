#include <stdio.h>

int main() {
    float n1, n2, media;

    printf("Digite a 1a e a 2a nota: ");
    scanf("%f %f", &n1, &n2);

    media = (n1 + n2) / 2;

    if (media >= 6.0) {
        printf("Aluno Aprovado!\n");
    } else {
        printf("Aluno Nao Aprovado!\n");
    }

    printf("Media calculada: %d\n", media); 

    return 0;
}