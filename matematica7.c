#include<stdio.h>
#include<math.h>

main() {

float salarioatual , valorreajuste;
float salarionovo;  


printf("\n Digite seu salario atual:R$ ");
scanf("%f",&salarioatual);

printf("\n Digite o reajuste : ");
scanf("%f",&valorreajuste);

salarionovo = salarioatual * (1+ valorreajuste/100);


printf("\n Seu novo salario e:R$ %2.f ",salarionovo);


return 0; 
}


