#include <stdio.h>

int main() {
    float v1, v2;

    printf("Digite dois valores distintos: ");
    scanf("%f %f", &v1, &v2);

    if (v1 > v2) {
        printf("O maior valor e: %.2f\n", v1);
    } else {
        printf("O maior valor e: %.2f\n", v2);
    }

    return 0;
}