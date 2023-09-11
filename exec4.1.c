#include <stdio.h>
#include <math.h>

int main() {
    double numero;

    printf("Digite um número: ");
    scanf("%lf", &numero);

    if (numero >= 0) {
        double raizQuadrada = sqrt(numero);
        printf("A raiz quadrada de %.2lf é %.2lf\n", numero, raizQuadrada);
    } else {
        double quadrado = numero * numero;
        printf("O quadrado de %.2lf é %.2lf\n", numero, quadrado);
    }

    return 0;
}
