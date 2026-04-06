#include <stdio.h>

int main() {
    float n1, n2, n3, media_final;

    printf("Digite as 3 notas do aluno: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media_final = (n1 * 2 + n2 * 3 + n3 * 5) / 10

    printf("Media final: %.2f\n", media_final);
    return 0;
}