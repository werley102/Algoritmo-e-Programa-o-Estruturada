#include <stdio.h>

int main() {
    int N;

    printf("Digite um número inteiro N: ");
    scanf("%d", &N);

    for (int i = 1; N > 0; i += 2) {
        printf("%d ", i);
        N--;
    }

    printf("\n");

    return 0;
}
