#include<stdio.h>

#include<math.h>

main() {

int numero1, numero2, soma, multi, sub;
float div;
int numero3;

printf("Digite dois numeros:");
scanf("%d %d", &numero1, &numero2);

soma = numero1 + numero2;
multi = numero1 * numero2;
sub = numero1 - numero2;
div = (float)numero1/(float)numero2;

printf("Soma: %d, \nMultiplicacao: %d, \nSubtracao: %d, \ndivisao: %.2f", soma, multi, sub, div );




    return 0;

}
