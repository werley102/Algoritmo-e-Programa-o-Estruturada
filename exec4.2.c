#include <stdio.h>

int main() {
    double A, B, C, D;

    printf("Digite quatro valores A, B, C e D: ");
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);

    double maior = A, menor = A;

    if (B > maior) maior = B;
    if (C > maior) maior = C;
    if (D > maior) maior = D;

    if (B < menor) menor = B;
    if (C < menor) menor = C;
    if (D < menor) menor = D;

    printf("O maior valor é %.2lf\n", maior);
    printf("O menor valor é %.2lf\n", menor);

    return 0;
}
