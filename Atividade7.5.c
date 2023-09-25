#include <stdio.h>

int main() {
    int soma = 0;

    for (int numero = 2, contador = 0; contador < 50; numero += 2, contador++) {
        soma += numero;
    }
    printf("A soma dos 50 primeiros números pares é: %d\n", soma);

    return 0;
}
