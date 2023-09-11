#include <stdio.h>

int main() {
    int idade, tempo_servico;

    printf("Digite a idade e o tempo de serviço (em anos) do trabalhador: ");
    scanf("%d %d", &idade, &tempo_servico);

    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25))
        printf("O trabalhador pode se aposentar.\n");
    else
        printf("O trabalhador não pode se aposentar.\n");

    return 0;
}
