#include<stdio.h>
#include<math.h>

main() {

float valorproduto, valorfrete, valordespesa, valoreal, valortotal, lucro, porcentagem; 


printf("\n Informe o Valor do produto:R$ ");
scanf("%f",&valorproduto); 
printf("\n Informe o Valor do frete:R$ ");
scanf("%f",&valorfrete);
printf("\n Informe o Valor da despesa:R$ ");
scanf("%f",&valordespesa);

printf("\n Informe o Valor que deseja vender seu produto:R$ ");
scanf("%f",&valoreal);


valortotal = valorproduto + valorfrete + valordespesa;

lucro = valoreal - valortotal;

porcentagem = lucro / valoreal * 100;


printf("O valor total é: %.2f%%", porcentagem);

return 0; 
}


