#include <stdio.h>

int main() {
    int hora_inicio, hora_fim, duracao;

    printf("Digite a hora de inicio e a hora de fim do jogo: ");
    scanf("%d %d", &hora_inicio, &hora_fim);

    if (hora_fim > hora_inicio) {
        duracao = hora_fim - hora_inicio;
    } else {
        duracao = (24 - hora_inicio) + hora_fim;
    }

    printf("A duracao do jogo foi de %d horas.\n", duracao);
    return 0;
}