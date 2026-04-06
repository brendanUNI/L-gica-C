#include <stdio.h>

int main() {
    float n1, n2, optativa, media;

    printf("Digite a nota da 1a avaliacao: ");
    scanf("%f", &n1);
    printf("Digite a nota da 2a avaliacao: ");
    scanf("%f", &n2);
    printf("Digite a nota da optativa (-1 se nao fez): ");
    scanf("%f", &optativa);

    if (optativa != -1) {
        if (n1 < n2 && optativa > n1) {
            n1 = optativa;
        } else if (n2 < n1 && optativa > n2) {
            n2 = optativa;
        } else if (n1 == n2 && optativa > n1) {
            n1 = optativa;
        }
    }

    media = (n1 + n2) / 2.0;
    printf("Media do semestre: %.2f\n", media);

    if (media >= 6.0) {
        printf("Aprovado\n");
    } else if (media < 3.0) {
        printf("Reprovado\n");
    } else {
        printf("Exame\n");
    }

    return 0;
}