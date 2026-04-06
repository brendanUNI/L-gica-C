#include <stdio.h>

int main() {
    int ano_atual, ano_nascimento, idade;

    printf("Digite o ano atual e o seu ano de nascimento: ");
    scanf("%d %d", &ano_atual, &ano_nascimento);

    idade = ano_atual - ano_nascimento;

    if (idade >= 16) {
        printf("Voce podera votar este ano!\n");
    } else {
        printf("Voce nao podera votar este ano!\n");
    }

    return 0;
}