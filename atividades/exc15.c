#include <stdio.h>

int main() {
    float valor;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    if (valor >= 0) {
        printf("Numero Positivo\n");
    } else {
        printf("Numero Negativo\n");
    }

    return 0;
}