#include <stdio.h>

int main() {
    float salario_atual, percentual, novo_salario;

    printf("Digite o salario atual e o percentual de reajuste: ");
    scanf("%f %f", &salario_atual, &percentual);

    novo_salario = salario_atual + (salario_atual * (percentual / 100));

    printf("Valor do novo salario: R$ %.2f\n", novo_salario);
    return 0;
}