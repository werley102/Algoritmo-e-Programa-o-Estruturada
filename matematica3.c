#include<stdio.h>
#include<math.h>

main() {


float valoreal; 
float valordolar = 4.94;

printf("\n Informe o Valor em Real a ser convetido em dolar: ");
scanf("%f",&valoreal); 

valordolar = valoreal / valordolar;

printf("Seu valor convertido é: %.2f", valordolar);

return 0; 
