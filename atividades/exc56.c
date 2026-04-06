#include <stdio.h>

int main() {
    int v1, v2, operacao;
    float resultado;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &v1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &v2);
    
    printf("Escolha a operacao (1.Adicao, 2.Subtracao, 3.Divisao, 4.Multiplicacao): ");
    scanf("%d", &operacao);

    if (operacao == 1) {
        resultado = v1 + v2;
    } else if (operacao == 2) {
        resultado = v1 - v2;
    } else if (operacao == 3) {
        resultado = (float)v1 / v2;
    } else if (operacao == 4) {
        resultado = v1 * v2;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}