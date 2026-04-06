#include <stdio.h>

int main() {
    int quantidade;
    float custo_total;

    printf("Quantas macas foram compradas? ");
    scanf("%d", &quantidade);

    if (quantidade >= 12) {
        custo_total = quantidade * 1.00;
    } else {
        custo_total = quantidade * 1.30;
    }

    printf("Custo total da compra: R$ %.2f\n", custo_total);
    return 0;
}