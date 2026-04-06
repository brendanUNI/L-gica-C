#include <stdio.h>

int main() {
    int lados;
    float medida, calculo;

    printf("Digite o numero de lados do poligono regular (3, 4 ou 5): ");
    scanf("%d", &lados);
    printf("Digite a medida do lado (em cm): ");
    scanf("%f", medida);

    if (lados == 3) {
        calculo = 3 * medida;
        printf("TRIANGULO\nPerimetro: %.2f cm\n", calculo);
    } else if (lados == 4) {
        calculo = medida * medida;
        printf("QUADRADO\nArea: %.2f cm2\n", calculo);
    } else if (lados == 5) {
        printf("PENTAGONO\n");
    }

    return 0;
}