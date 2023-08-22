#include<stdio.h>
#include<math.h>

main() {

float raio, pi=3.14, area; 


printf("\n Informe o Valor do raio: ");
scanf("%f",&raio); 
area = raio * raio * pi;


printf("O valor da sua area é: %.2f", area);

return 0; 
}


