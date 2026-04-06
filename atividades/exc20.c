#include <stdio.h>

int main() {
    float v1, v2;

    printf("Digite dois valores distintos: ");
    scanf("%f %f", &v1, &v2);

    if (v1 < v2) {
        printf("Ordem crescente: %.2f, %.2f\n", v1, v2);
    } else {
        printf("Ordem crescente: %.2f, %.2f\n", v2, v1);
    }

    return 0;
}