#include <stdio.h>

int main() {
    int N, i;
  
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
    }

    for (i = 0; i <= N; i++) {
        printf("%d ", i);
    }

    return 0;
}
