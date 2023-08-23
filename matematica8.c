#include<stdio.h>
#include<math.h>

main() {

float valorfabrica , valorfinal;
int distribuidor = 28;
int imposto = 45;

printf("Digite o valor de fabrica do carro:");
scanf("%f", &valorfabrica);

valorfinal = valorfabrica + (valorfabrica * distribuidor /100) + (valorfabrica *imposto /100);
printf("valor final e: %2.f", valorfinal);
  


return 0; 
}


