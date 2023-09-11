#include <stdio.h>

int main() {
    int nota1, nota2, nota3;

    printf("Digite as notas das três provas: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    double media = (nota1 + nota2 + 2 * nota3) / 4;

    printf("Média: %.2lf\n", media);

    if (media >= 7.0)
        printf("Aluno Aprovado!\n");
    else
        printf("Aluno Reprovado!\n");

    return 0;
}

