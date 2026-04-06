#include <stdio.h>

int main() {
    int num_carros;
    float valor_total_vendas, salario_fixo, valor_por_carro, salario_final;

    printf("Numero de carros vendidos: ");
    scanf("%d", &num_carros);
    printf("Valor total das vendas, salario fixo e comissao por carro: ");
    scanf("%f %f %f", &valor_total_vendas, &salario_fixo, &valor_por_carro);

    salario_final = salario_fixo + (num_carros * valor_por_carro) + (valor_total_vendas * 0.05);

    printf("Salario final do vendedor: R$ %.2f\n", salario_final);
    return 0;
}