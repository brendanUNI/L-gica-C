#include <stdio.h>

int main() {
    float valor;

    printf("Digite um valor: ");
    scanf("%f", &valor);

    if (valor > 10) {
        printf("E MAIOR QUE 10!\n");
    } else {
        printf("NAO E MAIOR QUE 10!\n");
    }
    
    return 0;
}