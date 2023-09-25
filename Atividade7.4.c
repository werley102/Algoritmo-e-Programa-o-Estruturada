#include <stdio.h>

int main() {
    int contador = 0;
    
    printf("Os cinco primeiros múltiplos de 3 maiores que 0 são:\n");

    for (int numero = 1; contador < 5; numero++) {
        if (numero % 3 == 0) {
            printf("%d\n", numero);
            contador++;
        }
    }

    return 0;
}
