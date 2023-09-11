#include <stdio.h>

int main() {
    double A, B, C;

    printf("Digite três valores A, B e C: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    if (A > B) {
        double temp = A;
        A = B;
        B = temp;
    }

    if (A > C) {
        double temp = A;
        A = C;
        C = temp;
    }

    if (B > C) {
        double temp = B;
        B = C;
        C = temp;
    }

    printf("Valores em ordem ascendente: %.2lf, %.2lf, %.2lf\n", A, B, C);

    return 0;
}
