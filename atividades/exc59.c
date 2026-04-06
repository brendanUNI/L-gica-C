#include <stdio.h>

int main() {
    float ang1, ang2, ang3;

    printf("Digite os valores dos 3 angulos do triangulo: ");
    scanf("%f %f %f", &ang1, &ang2, &ang3);

    if (ang1 == 90 || ang2 == 90 || ang3 == 90) {
        printf("Triangulo Retangulo\n");
    } else if (ang1 > 90 || ang2 > 90 || ang3 > 90) {
        printf("Triangulo Obtusangulo\n");
    } else {
        printf("Triangulo Acutangulo\n");
    }

    return 0;
}